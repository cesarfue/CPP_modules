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

void Dog::makeSound(void) const { std::cout << "*WOUF*" << std::endl; }

Dog::Dog(void) : Animal("Dog") {
  this->_brain = new Brain();
  std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog(void) {
  delete[] this->_brain;
  std::cout << "Dog destroyed" << std::endl;
}
