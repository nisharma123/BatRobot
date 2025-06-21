# from moveit_configs_utils import MoveItConfigsBuilder
# from moveit_configs_utils.launches import generate_demo_launch


# def generate_launch_description():
#     moveit_config = MoveItConfigsBuilder("batrobot", package_name="batrobot_moveit").to_moveit_configs()
#     return generate_demo_launch(moveit_config)


import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory

from moveit_configs_utils import MoveItConfigsBuilder
from moveit_configs_utils.launches import generate_demo_launch


def generate_launch_description():
    # Declare the 'is_ignition' argument (important for your XACRO)
    declared_arguments = []
    declared_arguments.append(
        DeclareLaunchArgument(
            "is_ignition",
            default_value="false", # Set to "true" if you are using Ignition Gazebo
            description="Use Ignition Gazebo (true) or Gazebo Classic (false)",
        )
    )

    # Get the LaunchConfiguration for it
    is_ignition = LaunchConfiguration("is_ignition")

    # Define the robot XACRO path (needed for MoveItConfigsBuilder)
    robot_xacro_path = os.path.join(
        str(get_package_share_directory("batrobot_description")), # Added str() for robustness
        "urdf",
        "bat_robot.urdf.xacro"
    )

    # Build MoveIt! configurations, passing the 'is_ignition' mapping to the XACRO
    moveit_config = (
        MoveItConfigsBuilder("batrobot", package_name="batrobot_moveit")
        .robot_description(
            file_path=robot_xacro_path, # Specify the XACRO file
            mappings={"is_ignition": is_ignition} # Pass the is_ignition argument to the XACRO
        )
        .to_moveit_configs()
    )

    # Generate the demo launch, passing along the arguments
    return LaunchDescription(declared_arguments + [
        generate_demo_launch(moveit_config),
    ])
