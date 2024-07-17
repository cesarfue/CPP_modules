#include "Span.hpp"
#include <iostream>

int main() {

  // 42 MAIN
  std::cout << "\t 42 main test\n" << std::endl;
  Span sp = Span(5);
  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;

  std::cout << "\n" << std::endl;

  // Personal main
  try {

    // Basic test
    std::cout << "\tBasic test with 100 values\n" << std::endl;
    Span Stan(100);
    for (size_t i = 0; i < 100; ++i) {
      Stan.addNumber(i);
    }
    std::cout << Stan << std::endl;
    std::cout << "Longest span : " << Stan.longestSpan()
              << "\nShortest span : " << Stan.shortestSpan() << "\n"
              << std::endl;
    // Stan.addNumber(250);
    std::cout << "\n" << std::endl;

    // Big test
    std::cout << "\tBIG TEST\n" << std::endl;
    Span BigStan(100000);
    for (size_t i = 0; i < 100000; i += 10) {
      BigStan.addNumber(i);
    }
    // std::cout << BigStan << std::endl;
    std::cout << "Longest span : " << BigStan.longestSpan()
              << "\nShortest span : " << BigStan.shortestSpan() << "\n"
              << std::endl;
    std::cout << "\n" << std::endl;

    // Input iterator test
    std::cout << "\tInput iterators test\n" << std::endl;
    Span StanWithIterators(100);
    std::vector<int> vecClone = Stan.getVec();
    StanWithIterators.fillSpan(vecClone.begin(), vecClone.end());

    std::cout << StanWithIterators << std::endl;
    std::cout << "Longest span : " << StanWithIterators.longestSpan()
              << "\nShortest span : " << StanWithIterators.shortestSpan()
              << "\n"
              << std::endl;
    std::cout << "\n" << std::endl;

  } catch (Span::outOfRangeException &e) {
    std::cout << e.what() << std::endl;
  } catch (Span::notBigEnoughException &e) {
    std::cout << e.what() << std::endl;
  }
  return 0;
}
