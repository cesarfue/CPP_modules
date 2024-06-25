/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:30:22 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/20 10:32:53 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* Self */

void FragTrap::highFivesGuys(void) {
  std::cout << this->_name << " : Hey give me five\n*CLAP*\n"
            << this->_name << " : Yeee that's my boy." << std::endl;
}

/* Claptraps members functions */

void FragTrap::attack(const std::string &target) {
  if (this->_energyPoints > 0) {
    this->_energyPoints -= 1;
    std::cout << "FragTrap " << this->_name << " attacks " << target
              << ", causing " << this->_attackDamage << " points of damage !"
              << std::endl;
  } else {
    std::cout << "FragTrap " << this->_name
              << " tries to attack but is too tired" << std::endl;
  }
}

/* Constructors  */

FragTrap::FragTrap(std::string name) {
  _name = name;
  _energyPoints = 100;
  _hitPoints = 100;
  _attackDamage = 30;
  std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(void) {
  _energyPoints = 100;
  _hitPoints = 100;
  _attackDamage = 30;
  std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src) {
  _name = src._name;
  _energyPoints = src._energyPoints;
  _hitPoints = src._hitPoints;
  _attackDamage = src._attackDamage;
  std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src) {
  if (this != &src) {
    _name = src._name;
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
  }
  std::cout << "FragTrap copy constructor called" << std::endl;
  return *this;
}

/*  Destructor */
FragTrap::~FragTrap(void) { std::cout << "FragTrap destroyed" << std::endl; }
