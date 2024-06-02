from launch import LanuchDescription
from launch_ros.actions import Node

def generate_launch_description():
    TheLaunchDescription = LanuchDescription()

    TheCPlusPlusNodePublisher = Node(package="CPlusPlusPackage", executable="CPlusPlusNodePublisher")
    TheCPlusPlusNodeSubscriber = Node(package="CPlusPlusPackage", executable="CPlusPlusNodeSubscriber")

    TheLaunchDescription.add_action(TheCPlusPlusNodePublisher)
    TheLaunchDescription.add_action(TheCPlusPlusNodeSubscriber)

    return TheLaunchDescription