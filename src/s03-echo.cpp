#include <stdint.h>
#include <chrono>
#include <iostream> 
#include <thread>

auto foo() -> uint64_t
{
      return 100000000000;
}

auto main(int argc, char* argv[]) -> int
{ 
      if (argc == 1) {
          return 1;
    }

      for (auto i = foo(); i > 10; --i) {
          std::cout << "Hello, " << i << " ";
          std::cout << std::endl;
          std::this_thread::sleep_for(std::chrono::milliseconds{500});
    } 
    std::cout << "\n";
    return 0;
}
