find_package(iceoryx_binding_c REQUIRED)
find_package(iceoryx_hoofs REQUIRED)
find_package(iceoryx_posh REQUIRED)

add_executable(ipc.test main.cpp)

target_link_libraries(ipc.test PRIVATE 
    iceoryx::iceoryx_binding_c 
    iceoryx::iceoryx_hoofs 
    iceoryx::iceoryx_posh)