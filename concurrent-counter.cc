// Author: Ryan Vickramasinghe
#include "concurrent-counter.h"

#include <iostream>

ConcurrentCounter::ConcurrentCounter(int num_threads): locks_(num_threads) {
    std::cout << "There are " << locks_.size() << " locks." << std::endl;
}
