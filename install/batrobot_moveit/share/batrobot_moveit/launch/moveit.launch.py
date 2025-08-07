from ament_index_python.packages import get_package_share_directory
import os
from launch import LaunchDescription
from moveit_configs_utils import MoveItConfigsBuilder
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    # Configuration
    moveit_config = (
        MoveItConfigsBuilder("batrobot", package_name="batrobot_moveit")
        .robot_description(file_path=os.path.join(
            get_package_share_directory("batrobot_description"),
            "urdf/bat_robot.urdf.xacro"))
        .robot_description_semantic("config/batrobot.srdf")
        .trajectory_execution("config/moveit_controllers.yaml")
        .planning_pipelines(pipelines=["ompl"])
        .to_moveit_configs()
    )

    # CRITICAL PARAMETERS
    moveit_config_dict = moveit_config.to_dict()
    moveit_config_dict.update({
        "use_sim_time": True,
        "controller_manager_name": "controller_manager",
        "moveit_controller_manager": "moveit_simple_controller_manager/MoveItSimpleControllerManager",  
        "use_controller_manager": True,
        "moveit_manage_controllers": False,
        "trajectory_execution.allowed_execution_duration_scaling": 4.0,
        "trajectory_execution.execution_duration_monitoring": False,
        "capabilities": "move_group/ExecuteTrajectoryAction",
        "disable_capabilities": "",
    })


    # Nodes
    move_group_node = Node(
        package="moveit_ros_move_group",
        executable="move_group",
        output="screen",
        parameters=[moveit_config_dict],
        arguments=["--ros-args", "--log-level", "info"],
    )

    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        arguments=["-d", os.path.join(
            get_package_share_directory("batrobot_moveit"),
            "config/moveit.rviz")],
        parameters=[moveit_config.to_dict()],
    )

    return LaunchDescription([
        move_group_node,
        rviz_node
    ])