#include "Bureaucrat.hpp"

void Bureaucrat::signForm(AForm &form) { form.beSigned(*this); }

void Bureaucrat::incrementGrade() { this->setGrade(this->_grade - 1); }

void Bureaucrat::decrementGrade() { this->setGrade(this->_grade + 1); }

Bureaucrat::Bureaucrat() : _name("Default") { setGrade(150); };

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name) {
  setGrade(grade);
};

Bureaucrat::~Bureaucrat(){};

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name) {
  setGrade(src._grade);
};

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src) {
  if (this != &src) {
    setGrade(src._grade);
  }
  return *this;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
  return out << bureaucrat.getName() << ", bureaucrat grade "
             << bureaucrat.getGrade() << std::endl;
}

std::string Bureaucrat::getName(void) const { return this->_name; }

int Bureaucrat::getGrade(void) const { return this->_grade; }

void Bureaucrat::setGrade(const int grade) {
  if (grade > 150)
    throw Bureaucrat::GradeTooLowException();
  if (grade < 1)
    throw Bureaucrat::GradeTooHighException();
  this->_grade = grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return "Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return "Grade too low";
}
