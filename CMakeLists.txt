cmake_minimum_required (VERSION 3.14)
project(app-builder)
find_package(OpenGL REQUIRED)

include_directories(external/mlh-renderer)
include_directories(external/mlh-renderer/external/json)

add_executable(app-builder main.cpp external/mlh-renderer/glad.c lib/stb_image.cpp)

target_include_directories(app-builder PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" "${CMAKE_CURRENT_SOURCE_DIR}/external/mlh-renderer/external/json/single_include")
target_link_libraries(app-builder glfw)
