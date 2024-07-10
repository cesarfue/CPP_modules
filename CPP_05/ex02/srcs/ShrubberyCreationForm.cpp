#include "ShrubberyCreationForm.hpp"

// void ShrubberyCreationForm.hpp::beSigned(Bureaucrat &bureaucrat) {
//   if (bureaucrat.getGrade() > this->getSignatureGrade())
//     throw ShrubberyCreationForm.hpp::GradeTooLowException();
//   else if (this->_signed == true)
//     std::cout << "ShrubberyCreationForm.hpp " << this->getName() << " is
//     already signed"
//               << std::endl;
//   else {
//     this->_signed = true;
//     std::cout << "ShrubberyCreationForm.hpp " << this->getName() << " was
//     signed by "
//               << bureaucrat.getName() << std::endl;
//   }
// }

ShrubberyCreationForm.hpp::ShrubberyCreationForm.hpp(const std::string name,
                                                     const int signatureGrade,
                                                     const int executeGrade)
    : _name(name),
_signatureGrade(signatureGrade), _executeGrade(executeGrade) {
  if (signatureGrade > 150 || executeGrade > 150)
    throw ShrubberyCreationForm.hpp::GradeTooLowException();
  else if (signatureGrade < 1 || executeGrade < 1)
    throw ShrubberyCreationForm.hpp::GradeTooHighException();
}

ShrubberyCreationForm.hpp::ShrubberyCreationForm.hpp()
    : _name("Default"),
_signatureGrade(150), _executeGrade(150) {}

ShrubberyCreationForm.hpp::~ShrubberyCreationForm.hpp() {}

ShrubberyCreationForm.hpp &
    ShrubberyCreationForm.hpp::operator=(const ShrubberyCreationForm.hpp &) {
  return *this;
}

ShrubberyCreationForm.hpp::ShrubberyCreationForm.hpp(
    const ShrubberyCreationForm.hpp &src)
    : _name(src._name),
_signatureGrade(src._signatureGrade), _executeGrade(src._executeGrade) {}

std::ostream &operator<<(std::ostream &out, const ShrubberyCreationForm.hpp &
                                                ShrubberyCreationForm.hpp) {
  return out << ShrubberyCreationForm.hpp.getName()
             << ", ShrubberyCreationForm.hpp signature grade : "
             << ShrubberyCreationForm.hpp.getSignatureGrade()
             << " , ShrubberyCreationForm.hpp execute grade : "
             << ShrubberyCreationForm.hpp.getExecuteGrade() << std::endl;
}

std::string ShrubberyCreationForm.hpp::getName(void) const {
  return this->_name;
}

int ShrubberyCreationForm.hpp::getSignatureGrade(void) const {
  return this->_signatureGrade;
}

int ShrubberyCreationForm.hpp::getExecuteGrade(void) const {
  return this->_executeGrade;
}

const char *ShrubberyCreationForm.hpp::GradeTooHighException::what() const
    throw() {
  return "Grade too high";
}

const char *ShrubberyCreationForm.hpp::GradeTooLowException::what() const
    throw() {
  return "Grade too low";
}
