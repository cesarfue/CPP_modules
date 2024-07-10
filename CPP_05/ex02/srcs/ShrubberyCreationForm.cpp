#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::execute(Bureaucrat const &executer) {
  if (executer.getGrade() > this->getExecuteGrade())
    throw AForm::GradeTooLowException();
  std::ofstream out(this->getTarget().append("_shrubbery").c_str());
  out << "             v .   ._, |_  .,\n"
      << "           `-._\\/  .  \\ /    |/_\n"
      << "               \\  _\\, y | \\//\n"
      << "         _\\_.___\\, \\/ -.\\||\n"
      << "           `7-,--.`._||  / / ,\n"
      << "           /'     `-. `./ / |/_.'\n"
      << "                     |    |//\n"
      << "                     |_    /\n"
      << "                     |-   |\n"
      << "                     |   =|\n"
      << "                     |    |\n"
      << "--------------------/ ,  . \\--------._\n"
      << std::endl;
  std::cout << "Trees have been planted" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("ShrubberyCreationForm", 145, 137), _target("Default") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm("ShrubberyCreationForm", 145, 137), _target(target){};

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &src)
    : AForm("ShrubberyCreationForm", 145, 137), _target(src.getTarget()){};

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &) {
  return *this;
}

std::string ShrubberyCreationForm::getTarget(void) { return this->_target; }

std::ostream &operator<<(std::ostream &out,
                         const ShrubberyCreationForm &ShrubberyCreationForm) {
  return out << ShrubberyCreationForm.getName()
             << ", ShrubberyCreationForm signature grade : "
             << ShrubberyCreationForm.getSignatureGrade()
             << " , ShrubberyCreationForm execute grade : "
             << ShrubberyCreationForm.getExecuteGrade() << std::endl;
}
