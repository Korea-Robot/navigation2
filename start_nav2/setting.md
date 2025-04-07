
# map 
global localization

map 좌표계상의 위치를 추정.

ros amcl => map -> odom


# odom

1. map => odom
2. odom => base_link
3. base_link 

nav2_costmap_2d 패키지 : 주변환경을  2d 격자지도 형태로 모델링

장애물 회피와 경로 계획의 기반임.

# layer 

staitc layer : slam이 만든 /map 데이터 기반 지도 
obstacle layer : 라이다등의 센서로 감지한 장애물
voxel layer : 3d 정보 반영 
inflation layer : 장애물 주변을 위험지역으로 확장
range layer : 초음파 정보 반영.

각레이어는 플러그인 방식으로 costmap에 결함

---

## global_costmap
지도 기반 장거리 경로 계획

고정된 /map 프레임 사용

사용된 레이어:

1. static_layer (지도 기반)
2. obstacle_layer (라이다)
3. inflation_layer (장애물 주변 확대)

---

## local_costmap
로컬 장애물 회피

/odom 프레임 기준

사용된 레이어:

1. voxel_layer (3D 센서)
2. inflation_layer

obstacle_layer:
  observation_sources: scan
  scan:
    topic: /scan
    data_type: "LaserScan"
    clearing: True
    marking: True

voxel_layer:
  observation_sources: scan
  publish_voxel_map: True
  z_resolution: 0.05
  z_voxels: 16


변환	설명	발행 주체
map → odom	SLAM이 생성한 전역 위치	slam_toolbox
odom → base_link	오도메트리 기반 상대 위치	ekf_node or Gazebo plugin
base_link → sensor	로봇 구조 기반 프레임	robot_state_publisher

## footprint

바닥면 2차원 외형
planning, collision avoidance에 사용 base_link 기준으로 정의

