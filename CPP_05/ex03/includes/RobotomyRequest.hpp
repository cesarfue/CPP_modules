#pragma once

#include "AForm.hpp"
#include <iostream>

class RobotomyRequest : public AForm {
private:
  const std::string _target;

public:
  void execute(Bureaucrat const &executer);
  RobotomyRequest();
  RobotomyRequest(const std::string &target);
  ~RobotomyRequest();
  RobotomyRequest &operator=(const RobotomyRequest &);
  RobotomyRequest(RobotomyRequest &);
  std::string getTarget(void);
};

std::ostream &operator<<(std::ostream &out,
                         const RobotomyRequest &RobotomyRequest);
