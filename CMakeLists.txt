cmake_minimum_required (VERSION 3.14)
project(app-builder)
set(CMAKE_EXPORT_COMPILE_COMMANDS YES)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(OpenGL REQUIRED)

include_directories(external/)
include_directories(external/mlh-renderer/external/json)

add_executable(app-builder main.cpp external/mlh-renderer/external/manually_added/glad/glad.c external/mlh-renderer/external/manually_added/stb_image/stb_image.cpp)

target_include_directories(app-builder PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" "${CMAKE_CURRENT_SOURCE_DIR}/external/mlh-renderer/external/json/single_include")
target_link_libraries(app-builder glfw)
