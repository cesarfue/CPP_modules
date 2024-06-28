#include "Bureaucrat.hpp"
#include <cstdlib>

int main(void) {
  try {
    Bureaucrat bureaucrat1("Bobby the boss", 1);
    Bureaucrat bureaucrat2("Bloup the weirdo", 150);
    std::cout << bureaucrat1 << std::endl;
    std::cout << bureaucrat2 << std::endl;

    bureaucrat1.incrementGrade();
    bureaucrat2.decrementGrade();
  } catch (Bureaucrat::GradeTooHighException &e) {
    std::cout << e.what() << std::endl;
  } catch (Bureaucrat::GradeTooLowException &e) {
    std::cout << e.what() << std::endl;
  }
  return EXIT_SUCCESS;
}
