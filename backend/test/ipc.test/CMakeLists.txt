find_package(cpp-ipc CONFIG REQUIRED)

add_executable(ipc.test main.cpp)

target_link_libraries(ipc.test PRIVATE cpp-ipc::ipc)
