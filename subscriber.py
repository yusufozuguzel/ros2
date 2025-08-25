import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32MultiArray

class randomSubscriber(Node):
    def __init__(self):
        super().__init__('random_subscriber')
        self.subscription = self.create_subscription(
            Int32MultiArray,
            'sayilar',
            self.listener_callback,
            10)
        self.subscription  #Olasi unused variable uyarısını önler

    def listener_callback(self, mesaj):
        sayilar = mesaj.data
        ciftSayi = sum(1 for num in sayilar if num % 2 == 0)
        toplam = sum(sayilar)
        ortalama = toplam / len(sayilar) if sayilar else 0
        self.get_logger().info(
            f'Olusturulan Sayilar: {sayilar}\n'
            f'Cift sayi adedi: {ciftSayi}\n'
            f'Toplam: {toplam}\n'
            f'Ortalama: {ortalama:.2f}'
        )

def main(args=None):
    rclpy.init(args=args)
    random_subscriber = randomSubscriber()
    rclpy.spin(random_subscriber)
    random_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
