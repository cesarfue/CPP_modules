#include "AForm.hpp"

void AForm::beSigned(Bureaucrat &signer) {
  if (signer.getGrade() > this->getSignatureGrade())
    throw AForm::GradeTooLowException();
  else if (this->_signed == true)
    std::cout << "AForm " << this->getName() << " is already signed"
              << std::endl;
  else {
    this->_signed = true;
    std::cout << "AForm " << this->getName() << " was signed by "
              << signer.getName() << std::endl;
  }
}

AForm::AForm(const std::string name, const int signatureGrade,
             const int executeGrade)
    : _name(name), _signed(false), _signatureGrade(signatureGrade),
      _executeGrade(executeGrade) {
  if (signatureGrade > 150 || executeGrade > 150)
    throw AForm::GradeTooLowException();
  else if (signatureGrade < 1 || executeGrade < 1)
    throw AForm::GradeTooHighException();
}

AForm::AForm()
    : _name("Default"), _signed(false), _signatureGrade(150),
      _executeGrade(150) {}

AForm::~AForm() {}

AForm &AForm::operator=(const AForm &) { return *this; }

AForm::AForm(const AForm &src)
    : _name(src._name), _signed(src._signed),
      _signatureGrade(src._signatureGrade), _executeGrade(src._executeGrade) {}

std::ostream &operator<<(std::ostream &out, const AForm &AForm) {
  return out << AForm.getName()
             << ", AForm signature grade : " << AForm.getSignatureGrade()
             << " , AForm execute grade : " << AForm.getExecuteGrade()
             << std::endl;
}

std::string AForm::getName(void) const { return this->_name; }

int AForm::getSignatureGrade(void) const { return this->_signatureGrade; }

int AForm::getExecuteGrade(void) const { return this->_executeGrade; }

const char *AForm::GradeTooHighException::what() const throw() {
  return "Grade too high";
}

const char *AForm::GradeTooLowException::what() const throw() {
  return "Grade too low";
}
