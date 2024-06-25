/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:17:31 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/20 10:34:18 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Members functions */

void ClapTrap::attack(const std::string &target) {
  if (this->_energyPoints > 0) {
    this->_energyPoints -= 1;
    std::cout << "ClapTrap " << this->_name << " attacks " << target
              << ", causing " << this->_attackDamage << " points of damage !"
              << std::endl;
  } else {
    std::cout << "ClapTrap " << this->_name
              << " tries to attack but is too tired" << std::endl;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  this->_hitPoints -= amount;
  if (this->_hitPoints > 0)
    std::cout << "ClapTrap " << this->_name << " got hit and took " << amount
              << " points of damage" << std::endl;
  else
    std::cout << "ClapTrap " << this->_name << " got hit by " << amount
              << " points of damage and died" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (this->_energyPoints > 0) {
    this->_energyPoints -= 1;
    this->_hitPoints += amount;
    std::cout << "ClapTrap " << this->_name << " repaired itself and gained "
              << amount << " energy points back" << std::endl;
  } else {
    std::cout << "ClapTrap " << this->_name
              << " tries to repair itself but is too tired" << std::endl;
  }
}

/* Constructors  */

ClapTrap::ClapTrap(std::string name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(void) : _hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
    : _name(src._name), _hitPoints(src._hitPoints),
      _energyPoints(src._energyPoints), _attackDamage(src._attackDamage) {
  std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
  if (this != &src) {
    _name = src._name;
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
  }
  std::cout << "ClapTrap copy constructor called" << std::endl;
  return *this;
}

/*  Destructor */
ClapTrap::~ClapTrap(void) { std::cout << "ClapTrap destroyed" << std::endl; }

/* Setters and getters */
std::string ClapTrap::get_name(void) const { return _name; }

void ClapTrap::set_name(const std::string name) { _name = name; }

int ClapTrap::get_hitPoints(void) const { return _hitPoints; }

void ClapTrap::set_hitPoints(const int hitPoints) { _hitPoints = hitPoints; }

int ClapTrap::get_energyPoints(void) const { return _energyPoints; }

void ClapTrap::set_energyPoints(const int energyPoints) {
  _energyPoints = energyPoints;
}

int ClapTrap::get_attackDamage(void) const { return _attackDamage; }

void ClapTrap::set_attackDamage(const int attackDamage) {
  _attackDamage = attackDamage;
}
