#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequest.hpp"
#include "ShrubberyCreationForm.hpp"
#include <cstdlib>

int main(void) {
  try {

    Bureaucrat *boss = new Bureaucrat("Mr Boss", 2);
    Bureaucrat *secretary = new Bureaucrat("Mr Secretary", 25);

    AForm *pardon = new PresidentialPardonForm("badGuy");
    secretary->signForm(*pardon);
    boss->executeForm(*pardon);
    delete pardon;

    std::cout << "\n" << std::endl;

    AForm *robotomy = new RobotomyRequest("badGuy");
    secretary->signForm(*robotomy);
    boss->executeForm(*robotomy);
    delete robotomy;

    std::cout << "\n" << std::endl;

    AForm *shrubbery = new ShrubberyCreationForm("badGuyGarden");
    secretary->signForm(*shrubbery);
    boss->executeForm(*shrubbery);
    delete shrubbery;

    delete boss;
    delete secretary;

  } catch (AForm::GradeTooHighException &e) {
    std::cout << e.what() << std::endl;
  } catch (AForm::GradeTooLowException &e) {
    std::cout << e.what() << std::endl;
  }

  return EXIT_SUCCESS;
}
