cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(MyLibtorchProject)

# libtorch가 압축 해제된 경로의 share/cmake/Torch 폴더를 지정합니다.
# 예: /home/username/path/to/libtorch
set(Torch_DIR "../libtorch/share/cmake/Torch")

find_package(Torch REQUIRED)

add_executable(MyLibtorchProject main.cpp)
target_link_libraries(MyLibtorchProject "${TORCH_LIBRARIES}")
set_property(TARGET MyLibtorchProject PROPERTY CXX_STANDARD 14)

