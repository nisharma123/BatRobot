#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import serial

class SimpleSerialTransmitter(Node):
    def __init__(self):
        super().__init__("simple_serial_transmitter")

        self.suscriber = self.create_subscription(String, "serial_transmitter", self.msgCallback, 10)

        self.arduino = serial.Serial(port="/dev/ttyACM0", baudrate=115200, timeout=0.1)

    def msgCallback(self, msg):
            self.get_logger().info(f"New message recieved, publishing on serial: {self.arduino.name}")
            self.arduino.write(msg.data.encode("utf-8"))

def main():
    rclpy.init()
    simple_serial_transmitter = SimpleSerialTransmitter()
    rclpy.spin(simple_serial_transmitter)
    simple_serial_transmitter.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
