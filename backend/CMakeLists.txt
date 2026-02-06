cmake_minimum_required(VERSION 3.20)

project(visualenet.backend)

set(CMAKE_TOOLCHAIN_FILE "./vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "vcpkg toolchain file")

add_subdirectory(./test)