from launch import LaunchDescription
from launch.actions import ExecuteProcess

def generate_launch_description():
    return LaunchDescription([
        # Turtlesim 
        ExecuteProcess(
            cmd=['gnome-terminal', '--title=Turtlesim Node', '--', 'ros2', 'run', 'turtlesim', 'turtlesim_node'],
            output='screen'
        ),

        # Turtlesim turtle_sekilleri
        ExecuteProcess(
            cmd=['gnome-terminal', '--title=Turtle Sekilleri Node', '--', 'ros2', 'run', 'turtlesim_paketi', 'turtle_sekilleri'],
            output='screen'
        ),

        # Publisher
        ExecuteProcess(
            cmd=['gnome-terminal', '--title=Publisher Node', '--', 'ros2', 'run', 'pubsub_paketi', 'publisher'],
            output='screen'
        ),

        # Subscriber 
        ExecuteProcess(
            cmd=['gnome-terminal', '--title=Subscriber Node', '--', 'ros2', 'run', 'pubsub_paketi', 'subscriber'],
            output='screen'
        ),

        # Server 
        ExecuteProcess(
            cmd=['gnome-terminal', '--title=Server Node', '--', 'ros2', 'run', 'ucgen_nodes', 'server_node'],
            output='screen'
        ),

        # Client 
        ExecuteProcess(
            cmd=['gnome-terminal', '--title=Client Node', '--', 'ros2', 'run', 'ucgen_nodes', 'client_node'],
            output='screen'
        ),
    ])
