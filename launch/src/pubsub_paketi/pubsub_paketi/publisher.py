import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32MultiArray #Liste halinde tam sayi dizisi tasimak için mesaj tipi
import random

class randomPublisher(Node):
    def __init__(self):
        super().__init__('random_publisher') #Node sinifini baslatir ve node'un kimligi olur
        #Publisher olusturma (sayi listesi adi, topic, kuyruk boyutu)
        self.publisher_ = self.create_publisher(Int32MultiArray, 'sayilar', 10) 
        timer_period = 1.0  #Zamanlayici süresi
        self.timer = self.create_timer(timer_period, self.timer_callback)

    #Her 1 saniyede 1-1000 arasi rastgele 5 sayi olusturan fonksiyon
    def timer_callback(self):
        mesaj = Int32MultiArray()
        mesaj.data = [random.randint(1, 1000) for _ in range(5)]
        self.publisher_.publish(mesaj)
        self.get_logger().info(f'Publisher calisiyor: {mesaj.data}')

def main(args=None):
    rclpy.init(args=args)
    random_publisher = randomPublisher()
    rclpy.spin(random_publisher)
    random_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
