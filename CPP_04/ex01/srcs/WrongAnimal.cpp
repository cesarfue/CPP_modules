/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 10:11:18 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/21 10:11:52 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void WrongAnimal::makeSound(void) const {
  std::cout << "WrongAnimal->MakeSound called" << std::endl;
}

WrongAnimal::WrongAnimal(void) : _type("") {
  std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type) : _type(type) {
  std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) : _type(src._type) {
  std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src) {
  if (this != &src) {
    _type = src._type;
  }
  std::cout << "WrongAnimal copy constructor called" << std::endl;
  return *this;
}

WrongAnimal::~WrongAnimal(void) {
  std::cout << "WrongAnimal destroyed" << std::endl;
}

std::string WrongAnimal::getType(void) const { return this->_type; }

void WrongAnimal::setType(const std::string type) { _type = type; }
