/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:32:31 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/21 10:07:24 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

void Cat::makeSound(void) const { std::cout << "*MEOW*" << std::endl; }

Cat::Cat(void) : Animal() {
  this->_type = "Cat";
  std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src) {
  std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src) {
  if (this != &src) {
    this->_type = src._type;
  }
  std::cout << "Cat assignment operator called" << std::endl;
  return *this;
}

Cat::~Cat(void) { std::cout << "Cat destroyed" << std::endl; }
