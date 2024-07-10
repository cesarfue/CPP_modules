#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm {
private:
  const std::string _name;
  bool _signed;
  const int _signatureGrade;
  const int _executeGrade;

public:
  virtual void beSigned(Bureaucrat &) = 0;
  AForm();
  AForm(const std::string name, const int signatureGrade,
        const int executeGrade);
  virtual ~AForm();
  AForm &operator=(const AForm &);
  AForm(const AForm &);

  std::string getName() const;
  int getSignatureGrade() const;
  int getExecuteGrade() const;

  class GradeTooHighException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
};

std::ostream &operator<<(std::ostream &out, const AForm &AForm);
