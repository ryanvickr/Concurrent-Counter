// Author: Ryan Vickramasinghe
#ifndef CONCURRENT_COUNTER_H
#define CONCURRENT_COUNTER_H

#include <mutex>

class ConcurrentCounter {
 public:
   ConcurrentCounter(int num_threads);

 private:
   const std::vector<std::mutex> locks_;
};

void test() {

}

#endif // CONCURRENT_COUNTER_H