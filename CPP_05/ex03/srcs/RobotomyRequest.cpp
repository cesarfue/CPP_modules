#include "RobotomyRequest.hpp"

static int i = 0;

void RobotomyRequest::execute(Bureaucrat const &executer) {
  if (executer.getGrade() > this->getExecuteGrade())
    throw AForm::GradeTooLowException();
  std::cout << "\n\tBRRRRRRR \n\t dzzzz\n\tBRRRRRRRTAKTAKTAK\n" << std::endl;
  if (i++ % 2 == 0)
    std::cout << this->getTarget() << " has been successfully robotomized"
              << std::endl;
  else
    std::cout << "Robotomy has failed" << std::endl;
}

RobotomyRequest::RobotomyRequest()
    : AForm("RobotomyRequest", 72, 45), _target("Default") {}

RobotomyRequest::RobotomyRequest(const std::string &target)
    : AForm("RobotomyRequest", 72, 45), _target(target){};

RobotomyRequest::RobotomyRequest(RobotomyRequest &src)
    : AForm("RobotomyRequest", 72, 45), _target(src.getTarget()){};

RobotomyRequest::~RobotomyRequest() {}

RobotomyRequest &RobotomyRequest::operator=(const RobotomyRequest &) {
  return *this;
}

std::string RobotomyRequest::getTarget(void) { return this->_target; }

std::ostream &operator<<(std::ostream &out,
                         const RobotomyRequest &RobotomyRequest) {
  return out << RobotomyRequest.getName()
             << ", RobotomyRequest signature grade : "
             << RobotomyRequest.getSignatureGrade()
             << " , RobotomyRequest execute grade : "
             << RobotomyRequest.getExecuteGrade() << std::endl;
}
