#include <iostream>

int main(int argc, char **argv) {
    std::cout << "Hello, World!" << std::endl;

    if (argc > 1) {
        return 1;
    } else {
        return 0;
    }
}
