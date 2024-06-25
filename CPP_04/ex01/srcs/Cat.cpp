/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:32:31 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/21 16:13:12 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
  _brain = new Brain();
  _type = "Cat";
  std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src) {
  _brain = new Brain(*src._brain);
  _type = src._type;
  std::cout << "Cat copied" << std::endl;
}

Cat &Cat::operator=(const Cat &src) {
  if (this != &src) {
    delete _brain;
    _brain = new Brain(*src._brain);
    _type = src._type;
  }
  std::cout << "Cat assigned" << std::endl;
  return *this;
}

Cat::~Cat() {
  delete _brain;
  std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const { std::cout << "Meow!" << std::endl; }
