#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequest.hpp"
#include "ShrubberyCreationForm.hpp"
#include <cstdlib>

int main(void) {
  try {

    Bureaucrat boss("Mr Boss", 2);
    Bureaucrat secretary("Mr Secretary", 25);

    AForm *robotomy = new RobotomyRequest("badGuy");
    robotomy->beSigned(secretary);
    robotomy->execute(boss);
    delete robotomy;

    std::cout << "\n" << std::endl;

    AForm *pardon = new PresidentialPardonForm("badGuy");
    pardon->beSigned(secretary);
    pardon->execute(boss);
    delete pardon;

    std::cout << "\n" << std::endl;

    AForm *shrubbery = new ShrubberyCreationForm("badGuyGarden");
    shrubbery->beSigned(secretary);
    shrubbery->execute(boss);
    delete shrubbery;

  } catch (AForm::GradeTooHighException &e) {
    std::cout << e.what() << std::endl;
  } catch (AForm::GradeTooLowException &e) {
    std::cout << e.what() << std::endl;
  }

  return EXIT_SUCCESS;
}
