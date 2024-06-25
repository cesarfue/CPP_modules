/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:29:37 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/21 10:07:15 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

void Dog::makeSound(void) const { std::cout << "*WOUF*" << std::endl; }

Dog::Dog(void) : Animal() {
  this->_type = "Dog";
  std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src) {
  std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src) {
  if (this != &src) {
    this->_type = src._type;
  }
  std::cout << "Dog assignment operator called" << std::endl;
  return *this;
}

Dog::~Dog(void) { std::cout << "Dog destroyed" << std::endl; }
