#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form {
private:
  const std::string _name;
  bool _signed;
  const int _signatureGrade;
  const int _executeGrade;

public:
  void beSigned(Bureaucrat &);
  Form();
  Form(const std::string name, const int signatureGrade,
       const int executeGrade);
  ~Form();
  Form &operator=(const Form &);
  Form(const Form &);

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

std::ostream &operator<<(std::ostream &out, const Form &Form);
