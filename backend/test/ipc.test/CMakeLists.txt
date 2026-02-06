find_package(eCAL CONFIG REQUIRED)

add_executable(ipc.test main.cpp)

target_link_libraries(ipc.test PRIVATE eCAL::core eCAL::core_c eCAL::core_pb eCAL::hdf5)
