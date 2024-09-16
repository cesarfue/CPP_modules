#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T> void boohfy(T &var) { (void)var; }

template <> void boohfy<std::string>(std::string &var) {
  if (var == "BOOH") {
    var.replace(0, var.length(), "👻");
  }
}

template <> void boohfy<int>(int &var) {
  if (var == 0) {
    var = -1;
  }
}

template <typename T> void print(T arr) { std::cout << arr << " "; }

int main() {

  std::string test1[] = {"BOOH", "BOOH", "BOOH"};
  int test2[] = {0, 8, 2, 0, 6};

  ::iter(test1, 3, boohfy);
  ::iter(test2, 5, boohfy);

  ::iter(test1, 3, print);
  std::cout << std::endl;
  ::iter(test2, 5, print);
  std::cout << std::endl;

  return 0;
}
