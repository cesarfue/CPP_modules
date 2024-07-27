#pragma once

#include <iostream>
#include <sstream>
#include <stack>
#include <string>

class RPN {
private:
  std::stack<int> stack;

public:
  void call(const std::string input);
  void calc(char operand);
  void print();
  RPN();
  ~RPN();
  RPN &operator=(const RPN &);
  RPN(const RPN &);
};
