#include <atomic>
#include <iostream>

int main () {
    std::atomic<int> x{0};
    int a = 5;

    while (a != 0) {
        x += 1;
        std::cout << x << std::endl;
    }
}

