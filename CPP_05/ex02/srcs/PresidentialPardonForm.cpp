#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::execute(Bureaucrat const &executer) {
  if (executer.getGrade() > this->getExecuteGrade())
    throw AForm::GradeTooLowException();
  std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox"
            << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("PresidentialPardonForm", 25, 5), _target("Default") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : AForm("PresidentialPardonForm", 25, 5), _target(target){};

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &src)
    : AForm("PresidentialPardonForm", 25, 5), _target(src.getTarget()){};

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &) {
  return *this;
}

std::string PresidentialPardonForm::getTarget(void) { return this->_target; }

std::ostream &operator<<(std::ostream &out,
                         const PresidentialPardonForm &PresidentialPardonForm) {
  return out << PresidentialPardonForm.getName()
             << ", PresidentialPardonForm signature grade : "
             << PresidentialPardonForm.getSignatureGrade()
             << " , PresidentialPardonForm execute grade : "
             << PresidentialPardonForm.getExecuteGrade() << std::endl;
}
