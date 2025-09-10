import rclpy
from rclpy.node import Node
from ucgen_arayuzleri.srv import UcgenHesaplamalari  
import sys  # Çıkış için

class UcgenIstemci(Node):
    def __init__(self):
        super().__init__('ucgen_istemci')
        self.client = self.create_client(UcgenHesaplamalari, 'hesapla_ucgen')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Sunucu hazır değil, bekleniyor...')
        self.get_logger().info('Üçgen İstemcisi hazır.')

    def gonder_istek(self, mod, taban=0.0, yukseklik=0.0, kenar1=0.0, kenar2=0.0, kenar3=0.0):
        request = UcgenHesaplamalari.Request()
        request.mod = mod
        request.taban = taban
        request.yukseklik = yukseklik
        request.kenar1 = kenar1
        request.kenar2 = kenar2
        request.kenar3 = kenar3
        future = self.client.call_async(request)
        rclpy.spin_until_future_complete(self, future)
        return future.result()

def main(args=None):
    rclpy.init(args=args)
    dugum = UcgenIstemci()

    while True:
        print("\nSeçenekler:")
        print("1: Üçgen Alanı Hesapla")
        print("2: Üçgen Çevresi Hesapla")
        print("0: Çıkış")
        secim = input("Seçiminiz: ").strip()

        if secim == '0':
            print("Program kapatılıyor...")
            break
        elif secim == '1':
            try:
                taban = float(input("Taban girin: "))
                yukseklik = float(input("Yükseklik girin: "))
                response = dugum.gonder_istek(1, taban, yukseklik)
            except ValueError:
                print("Geçersiz giriş! Sayı girin.")
                continue
        elif secim == '2':
            try:
                kenar1 = float(input("Kenar 1 girin: "))
                kenar2 = float(input("Kenar 2 girin: "))
                kenar3 = float(input("Kenar 3 girin: "))
                response = dugum.gonder_istek(2, kenar1=kenar1, kenar2=kenar2, kenar3=kenar3)
            except ValueError:
                print("Geçersiz giriş! Sayı girin.")
                continue
        else:
            print("Geçersiz seçim!")
            continue

        if response is not None:
            print(f"Sonuç: {response.sonuc}")
            print(f"Mesaj: {response.mesaj}")
        else:
            print("Yanıt alınamadı!")

    dugum.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
