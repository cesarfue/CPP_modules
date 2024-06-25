/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:54:18 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/20 10:24:42 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

/* Personal member functions */

void ScavTrap::guardGate(void) {
  std::cout << "ScavTrap " << this->_name << " is now in gatekeeper mode"
            << std::endl;
}

/* Claptraps members functions */

void ScavTrap::attack(const std::string &target) {
  if (this->_energyPoints > 0) {
    this->_energyPoints -= 1;
    std::cout << "ScavTrap " << this->_name << " attacks " << target
              << ", causing " << this->_attackDamage << " points of damage !"
              << std::endl;
  } else {
    std::cout << "ScavTrap " << this->_name
              << " tries to attack but is too tired" << std::endl;
  }
}

/* Constructors  */

ScavTrap::ScavTrap(std::string name) {
  _name = name;
  _hitPoints = 100;
  _energyPoints = 50;
  _attackDamage = 20;
  std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(void) {
  _hitPoints = 100;
  _energyPoints = 50;
  _attackDamage = 20;
  std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src) {
  _name = src._name;
  _hitPoints = src._hitPoints;
  _energyPoints = src._energyPoints;
  _attackDamage = src._attackDamage;
  std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
  if (this != &src) {
    _name = src._name;
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
  }
  std::cout << "ScavTrap copy constructor called" << std::endl;
  return *this;
}

/*  Destructor */
ScavTrap::~ScavTrap(void) { std::cout << "ScavTrap destroyed" << std::endl; }
