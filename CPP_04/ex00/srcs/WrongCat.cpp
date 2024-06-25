/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 10:11:58 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/21 10:18:08 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

void WrongCat::makeSound(void) const { std::cout << "*BEEEH*" << std::endl; }

WrongCat::WrongCat(void) : WrongAnimal() {
  this->_type = "WrongCat";
  std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src) {
  std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src) {
  if (this != &src) {
    this->_type = src._type;
  }
  std::cout << "WrongCat assignment operator called" << std::endl;
  return *this;
}

WrongCat::~WrongCat(void) { std::cout << "WrongCat destroyed" << std::endl; }
