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

import time
from std_msgs.msg import String
from robot_interfaces.msg import Anglemotor



class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('quadruped_publisher')
        self.publisher_ = self.create_publisher(Anglemotor, 'topic', 10)
        #self.Check_communication()
        timer_period = 5 # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg = Anglemotor()
        msg.message = "Hello, Arduino!"
        msg.p0z0 = 1.0
        msg.p0z1 = 1.0
        msg.p0z2 = 1.0
        msg.p1z0 = 100.0
        msg.p1z1 = 1.0
        msg.p1z2 = 1.0
        msg.p2z0 = 2.00
        msg.p2z1 = 1.0
        msg.p2z2 = 1.0
        msg.p3z0 = 3.0
        msg.p3z1 = 1.0
        msg.p3z2 = 1.0
        msg.armz0 = 4.0
        msg.armz1 = 1.0
        msg.armz2 = 1.0
        msg.armz3 = 1.0
        msg.armz4 = 1.0
        msg.gripper = 5.0

        self.publisher_.publish(msg)
        self.get_logger().info('is publishing')

      



def main(args=None):
    rclpy.init(args=args)

    quadruped_publisher = MinimalPublisher()

    rclpy.spin(quadruped_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    quadruped_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
