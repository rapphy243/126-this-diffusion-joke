#include <iostream>

#include "src/particle.hpp"

int main() {
  srand(static_cast<unsigned int>(time(nullptr)));

  std::cout << "The ending positions of a particles after walking 10 steps is " << std::endl;
  for (int i = 0; i < 10; ++i) {
    std::cout << "Trial " << (i + 1) << ": " << walk(10) << std::endl;
  }
  std::cout << std::endl;

  std::cout << "The ending positions of a particles after walking 20 steps is " << std::endl;
  for (int i = 0; i < 10; ++i) {
    std::cout << "Trial " << (i + 1) << ": " << walk(20) << std::endl;
  }
  std::cout << std::endl;

  std::cout << "The ending positions of a particles after walking 100 steps is " << std::endl;
  for (int i = 0; i < 10; ++i) {
    std::cout << "Trial " << (i + 1) << ": " << walk(100) << std::endl;
  }
  std::cout << std::endl;
}
 