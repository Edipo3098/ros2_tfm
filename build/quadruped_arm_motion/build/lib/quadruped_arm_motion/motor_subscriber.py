# Copyright 2016 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import rclpy
from rclpy.node import Node
from robot_interfaces.msg import Anglemotor
import time
import serial


class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('motor_subscriber')
        self.subscription = self.create_subscription(
            Anglemotor,
            'topic',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info('ACCE in X "%s"' % msg.p0z0)
        self.get_logger().info('ACCE in y "%s"' % msg.p1z0)
        self.get_logger().info('ACCE in z "%s"' % msg.p2z0)
        self.get_logger().info('giro in x  "%s"' % msg.p3z0)
        self.get_logger().info('giro in y "%s"' % msg.armz0)
        self.get_logger().info('giro in z "%s"' % msg.gripper)
        serial_port = '/dev/ttyS5'
        baud_rate = 115200

        ser = serial.Serial(serial_port, baud_rate, timeout=1)


        try:
            # Send data over the serial connection
            data_to_send = msg.message
            ser.write(data_to_send.encode())  # Encode string as bytes before sending

            # Wait for a moment
            
            # Read response from the serial connection
            received_data = ser.readline().decode().strip()
            self.get_logger().info('Received: "%s"' % received_data)

        except KeyboardInterrupt:
            # If Ctrl+C is pressed, break out of the loop
            print("Keyboard interrupt detected. Exiting...")
        finally:
            # Close the serial port, even if an exception occurs
            ser.close()
        


def main(args=None):
    rclpy.init(args=args)

    motor_subscriber = MinimalSubscriber()

    rclpy.spin(motor_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    motor_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
