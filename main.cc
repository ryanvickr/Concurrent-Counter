// Author: Ryan Vickramasinghe
#include <iostream>
#include "counter/concurrent-counter.h"

int main() {
    ConcurrentCounter counter(2);
    std::cout << "Hello!" << std::endl;

    return 0;
}
