
# ROS 2 imports
import rclpy
from rclpy.node import Node
from rcl_interfaces.msg import ParameterDescriptor, ParameterType
from joint_state_publisher.joint_state_publisher import JointStatePublisher
from sensor_msgs.msg import JointState
import std_msgs.msg
from std_msgs.msg import String





class ARM_telop_publisher(Node):

    def __init__(self):
        super().__init__('teleop_publisher')
        self.publisher = self.create_publisher( JointState, 'joint_states',  10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i =    0

    def timer_callback(self):
        joint_state_msg = JointState()
        joint_state_msg.name = ['Z1', 'Z2', 'Z3', 'Z4', 'Z5']
        joint_state_msg.position = [float(self.i), 0.0, 0.0, 0.0, 0.0]
        joint_state_msg.velocity = []
        joint_state_msg.effort = []
        self.publisher.publish(joint_state_msg)
        self.get_logger().info('Publishing JointState message. "%s"' %self.i )
        if self.i >= 1:
            self.i = 0

        else:

            self.i += 0.1


def main(args=None):
    rclpy.init(args=args)

    teleop_publisher_join = ARM_telop_publisher()

    rclpy.spin(teleop_publisher_join)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    teleop_publisher_join.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()