from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    # Creating A LaunchDescription Object And Assigning That To The <TheLaunchDescription> Variable
    TheLaunchDescription = LaunchDescription()

    # Creating A Node Action And Assigning That To The <TheCPlusPlusNodeParameter> Variable
    TheCPlusPlusNodeParameter = Node(package="CPlusPlusPackage", executable="CPlusPlusNodeParameter", parameters=[{"TheParameter" : int(20)}])

    # Add A Node Action To The <TheLaunchDescription> Object
    TheLaunchDescription.add_action(TheCPlusPlusNodeParameter)

    # Returning <TheLaunchDescription> Object To The Output Of The Function
    return TheLaunchDescription