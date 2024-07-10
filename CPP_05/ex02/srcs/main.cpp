#include "Bureaucrat.hpp"
#include <cstdlib>

int main(void) {
  try {

    Form FormA("DestroyEvilPotatoes", 40, 5);
    Form FormB("DestroyEvilHumans", 40, 5);
    Bureaucrat bureaucrat2("Bloup the weirdo", 150);
    Bureaucrat bureaucrat1("Bobby the boss", 1);
    std::cout << FormA << std::endl;

    FormA.beSigned(bureaucrat1);
    FormA.beSigned(bureaucrat1);
    FormA.beSigned(bureaucrat2);

  } catch (Form::GradeTooHighException &e) {
    std::cout << e.what() << std::endl;
  } catch (Form::GradeTooLowException &e) {
    std::cout << e.what() << std::endl;
  }
  return EXIT_SUCCESS;
}
