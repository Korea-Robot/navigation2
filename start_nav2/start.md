## nav2 stack 

2 step prcoess 

1. create map with SLAM
2. make the robot navigation form point A to point B


ROS2 communication  - camera, navigation, driver, joystick


```bash
sudo apt install ros-humble-navigation2 ros-humble-nav2-bringup ros-humble-turtlebot3*
```

### make yor robot move in env


```bash
vim ~/.bashrc
export TURTLEBOT3_MODEL = waffle
source opt/ros2/humble/setup.bash

source ~/.bashrc
printenv | grep turtle

ros2 launch turtlebot3_gazebo turtlebot3_world.launch.py
```

2 wheel lidar & laser scan


### teleop keyboar
```
ros2 run turtlebot3_teleop teleop_keyboard 

rqt_graph
```

## generate map with slam

slame featue



```
ros2 launch turtlebot3_cartographer cartographer.launch.py 
ros2 launch turtlebot3_cartographer cartographer.launch.py use_sim_time:=True

```

when too veloicty fast then rviz have truble.

## save map

```
ros2 run nav2_map_server map_saver_cli
```


white : freee pace
black : wall , obstacle
grey  : unkown

map.yaml

resolution : 0.05 == 0.05m
occupied_thresh : 0.65  ## occupied or not.

free_thresh : 0.25 ## 0.25 이하이면 free space

```
sudo apt install ros-humble-rmw-cyclonedds-cpp

export RMW_IMPLEMENTATION = rmw_cyclonedds_cpp
```

## make the robot navigate using the map 

provicde map

```
ros2 launch turtlebot3_navigation2 navigation2.launch.py use_sim_time:=True map:=nav2_ws/maps/mymap.yaml 

```


real 2d pose estimate : given estimation where robot exist.

don't have the robot : 2d pose estimate check robot here.

origin of map.


right hand rule

