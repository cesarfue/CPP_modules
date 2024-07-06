#pragma once

#include "Form.hpp"
#include <iostream>

class Form;

class Bureaucrat {
private:
  const std::string _name;
  int _grade;

public:
  void incrementGrade();
  void decrementGrade();
  void signForm(Form &form);
  Bureaucrat();
  Bureaucrat(const std::string &name, int grade);
  ~Bureaucrat();
  Bureaucrat(const Bureaucrat &src);
  Bureaucrat &operator=(const Bureaucrat &src);
  std::string getName() const;
  void setGrade(const int grade);
  int getGrade() const;
  class GradeTooHighException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);
