#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import serial

class SimpleSerialReciever(Node):
    def __init__(self):
        super().__init__("simple_serial_reciever")

        self.publish = self.create_publisher(String, "serial_reciever", 10)
        self.frequency = 0.01 # Hz
        self.arduino = serial.Serial(port="/dev/ttyACM0", baudrate=115200, timeout=0.1)
        self.timer = self.create_timer(self.frequency, self.timerCallback)

    def timerCallback(self):
        if rclpy.ok() and self.arduino.is_open:
            data = self.arduino.readline()

            try:
                data.decode("utf-8")
            except:
                return
            msg = String()
            msg.data = str(data)
            self.publish.publish(msg)
            

def main():
    rclpy.init()
    simple_serial_reciever = SimpleSerialReciever()
    rclpy.spin(simple_serial_reciever)
    simple_serial_reciever.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()