import rclpy
from rclpy.node import Node
from ucgen_arayuzleri.srv import UcgenHesaplamalari

class UcgenSunucu(Node):
    def __init__(self):
        super().__init__('ucgen_sunucu')
        self.srv = self.create_service(UcgenHesaplamalari, 'hesapla_ucgen', self.hesapla_callback)
        self.get_logger().info('Üçgen Sunucusu hazır.')

    def hesapla_callback(self, request, response):
        if request.mod == 1:  # Alan hesaplama
            if request.taban > 0 and request.yukseklik > 0:
                response.sonuc = 0.5 * request.taban * request.yukseklik
                response.mesaj = 'Alan hesaplandı.'
            else:
                response.sonuc = 0.0
                response.mesaj = 'Geçersiz taban veya yükseklik.'
        elif request.mod == 2:  # Çevre hesaplama
            k1, k2, k3 = request.kenar1, request.kenar2, request.kenar3
            if k1 <= 0 or k2 <= 0 or k3 <= 0:
                response.sonuc = 0.0
                response.mesaj = 'Kenarlar pozitif olmalı.'
            elif k1 + k2 <= k3 or k1 + k3 <= k2 or k2 + k3 <= k1:
                response.sonuc = 0.0
                response.mesaj = 'Üçgen eşitsizliğine uymuyor.'
            else:
                response.sonuc = k1 + k2 + k3
                response.mesaj = 'Çevre hesaplandı.'
        else:
            response.sonuc = 0.0
            response.mesaj = 'Geçersiz mod.'
        return response

def main(args=None):
    rclpy.init(args=args)
    dugum = UcgenSunucu()
    try:
        rclpy.spin(dugum)
    except KeyboardInterrupt:
        pass
    finally:
        dugum.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
