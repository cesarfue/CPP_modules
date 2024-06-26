/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 10:11:18 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/21 10:11:52 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAAnimal.hpp"

void WrongAAnimal::makeSound(void) const {
  std::cout << "WrongAAnimal->MakeSound called" << std::endl;
}

WrongAAnimal::WrongAAnimal(void) : _type("WrongAAnimal") {
  std::cout << "WrongAAnimal default constructor called" << std::endl;
}

WrongAAnimal::WrongAAnimal(const std::string type) : _type(type) {
  std::cout << "WrongAAnimal default constructor called" << std::endl;
}

WrongAAnimal::WrongAAnimal(const WrongAAnimal &src) : _type(src._type) {
  std::cout << "WrongAAnimal copy constructor called" << std::endl;
}

WrongAAnimal &WrongAAnimal::operator=(const WrongAAnimal &src) {
  if (this != &src) {
    _type = src._type;
  }
  std::cout << "WrongAAnimal copy constructor called" << std::endl;
  return *this;
}

WrongAAnimal::~WrongAAnimal(void) {
  std::cout << "WrongAAnimal destroyed" << std::endl;
}

std::string WrongAAnimal::getType(void) const { return this->_type; }

void WrongAAnimal::setType(const std::string type) { _type = type; }
