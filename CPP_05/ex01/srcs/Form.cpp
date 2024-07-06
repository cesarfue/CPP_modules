#include "Form.hpp"

void Form::beSigned(Bureaucrat &bureaucrat) {
  if (bureaucrat.getGrade() > this->getSignatureGrade())
    throw Form::GradeTooLowException();
  else if (this->_signed == true)
    std::cout << "Form " << this->getName() << " is already signed"
              << std::endl;
  else {
    this->_signed = true;
    std::cout << "Form " << this->getName() << " was signed by "
              << bureaucrat.getName() << std::endl;
  }
}

Form::Form(const std::string name, const int signatureGrade,
           const int executeGrade)
    : _name(name), _signatureGrade(signatureGrade),
      _executeGrade(executeGrade) {
  if (signatureGrade > 150 || executeGrade > 150)
    throw Form::GradeTooLowException();
  else if (signatureGrade < 1 || executeGrade < 1)
    throw Form::GradeTooHighException();
}

Form::Form() : _name("Default"), _signatureGrade(150), _executeGrade(150) {}

Form::~Form() {}

Form &Form::operator=(const Form &) { return *this; }

Form::Form(const Form &src)
    : _name(src._name), _signatureGrade(src._signatureGrade),
      _executeGrade(src._executeGrade) {}

std::ostream &operator<<(std::ostream &out, const Form &Form) {
  return out << Form.getName()
             << ", Form signature grade : " << Form.getSignatureGrade()
             << " , Form execute grade : " << Form.getExecuteGrade()
             << std::endl;
}

std::string Form::getName(void) const { return this->_name; }

int Form::getSignatureGrade(void) const { return this->_signatureGrade; }

int Form::getExecuteGrade(void) const { return this->_executeGrade; }

const char *Form::GradeTooHighException::what() const throw() {
  return "Grade too high";
}

const char *Form::GradeTooLowException::what() const throw() {
  return "Grade too low";
}
