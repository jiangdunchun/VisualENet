#include <iostream>
#include <string>
#include <thread>
#include <ecal/ecal.h>
#include <ecal/msg/string/publisher.h>

int main(int argc, char** argv) {
    std::cout << "===start service in /ipc.test===" << std::endl;

    eCAL::Initialize(0, nullptr, "simple_publisher");

    eCAL::string::CPublisher<std::string> pub("demo_topic");

    while (eCAL::Ok()) {
        pub.Send("Hello from eCAL!");
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    eCAL::Finalize();
    return 0;
}