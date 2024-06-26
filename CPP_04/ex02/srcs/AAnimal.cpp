/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:17:17 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/21 08:56:58 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

void AAnimal::makeSound(void) const {
  std::cout << "AAnimal->MakeSound called" << std::endl;
}

AAnimal::AAnimal(void) : _type("AAnimal") {
  std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string type) : _type(type) {
  std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src) : _type(src._type) {
  std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &src) {
  if (this != &src) {
    _type = src._type;
  }
  std::cout << "AAnimal copy constructor called" << std::endl;
  return *this;
}

AAnimal::~AAnimal(void) { std::cout << "AAnimal destroyed" << std::endl; }

std::string AAnimal::getType(void) const { return this->_type; }

void AAnimal::setType(const std::string type) { _type = type; }
