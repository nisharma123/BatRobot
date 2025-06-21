import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64

class SimplePublisher(Node):
    def __init__(self):
        super().__init__("simple_publisher")

        self.publisher = self.create_publisher(Int64, "/chatter", 10, self.simple_pubCallback)

    def simple_pubCallback(self):
        pass


def main():
    rclpy.init()
    simple_publisher = SimplePublisher()
    rclpy.spin(simple_publisher)
    simple_publisher.destroy_node()
