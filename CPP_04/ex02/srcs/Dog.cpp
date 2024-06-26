/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:29:37 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/21 16:12:28 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
  _brain = new Brain();
  _type = "Dog";
  std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog &src) : AAnimal(src) {
  _brain = new Brain(*src._brain);
  _type = src._type;
  std::cout << "Dog copied" << std::endl;
}

Dog &Dog::operator=(const Dog &src) {
  if (this != &src) {
    delete _brain;
    _brain = new Brain(*src._brain);
    _type = src._type;
  }
  std::cout << "Dog assigned" << std::endl;
  return *this;
}

Dog::~Dog() {
  delete _brain;
  std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const { std::cout << "Woof!" << std::endl; }
