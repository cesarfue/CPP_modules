#include "RPN.hpp"

void RPN::call(const std::string input) {
  if (input.length() >= 2) {
    std::cerr << "Error: '" << input << "': invalid argument" << std::endl;
    return;
  }

  if (input.length() == 1) {
    if (input.find_first_of("+-/*") != std::string::npos) {
      calc(input[0]);
      return;
    } else if (isdigit(input[0])) {
      stack.push(stoi(input));
    } else {
      std::cerr << "Error: invalid argument or operand" << std::endl;
    }
  }
}

void RPN::calc(char operand) {
  if (stack.size() < 2) {
    return;
  }
  int result;

  int op2 = stack.top();
  stack.pop();
  int op1 = stack.top();
  stack.pop();

  switch (operand) {
  case '+':
    result = op1 + op2;
    break;
  case '-':
    result = op1 - op2;
    break;
  case '/':
    result = op1 / op2;
    break;
  case '*':
    result = op1 * op2;
    break;
  default:
    return;
  }
  stack.push(result);
}

void RPN::print() {
  if (stack.empty()) {
    std::cerr << "Error: stack is empty" << std::endl;
  } else if (stack.size() != 1) {
    std::cerr << "Error: input should end with operator" << std::endl;
  } else {
    std::cerr << stack.top() << std::endl;
  }
}

RPN::RPN() {}
RPN::~RPN() {}
RPN &RPN::operator=(const RPN &src) {
  if (this != &src) {
    while (!stack.empty()) {
      stack.pop();
    }
    std::stack<int> tmp, cpy = src.stack;
    while (!cpy.empty()) {
      tmp.push(cpy.top());
      cpy.pop();
    }
    while (!tmp.empty()) {
      stack.push(tmp.top());
      tmp.pop();
    }
  }
  return *this;
}

RPN::RPN(const RPN &src) { *this = src; }
