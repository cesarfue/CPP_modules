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

WrongCat::WrongCat() {
  _brain = new Brain();
  _type = "WrongCat";
  std::cout << "WrongCat created" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAAnimal(src) {
  _brain = new Brain(*src._brain);
  _type = src._type;
  std::cout << "WrongCat copied" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src) {
  if (this != &src) {
    delete _brain;
    _brain = new Brain(*src._brain);
    _type = src._type;
  }
  std::cout << "WrongCat assigned" << std::endl;
  return *this;
}

WrongCat::~WrongCat() {
  delete _brain;
  std::cout << "WrongCat destroyed" << std::endl;
}

void WrongCat::makeSound() const { std::cout << "BEEHH!" << std::endl; }
