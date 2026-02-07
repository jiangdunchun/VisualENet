#include <iostream>

#include <libipc/ipc.h>

#define NUM_CLIENT 10
#define NUM_SIGNAL_PER_CLIENT 1000
#define NUM_SIGNAL (NUM_CLIENT * NUM_SIGNAL_PER_CLIENT)

int main(int argc, char** argv) {
    bool is_server = true;
    int client_id = -1;

    if (argc > 1) {
        is_server = false;
        client_id = atoi(argv[1]);
        if (client_id < 0 || client_id >= NUM_CLIENT) {
            std::cout << "error: now a valid client id" << std::endl;
            return 0;
        }
    }

    if (is_server) {
        std::cout << "=== start ipc server ===" << std::endl;
    }
    else {
        std::cout << "=== start ipc client " << client_id << " ===" << std::endl;
    }

    return 1;
}