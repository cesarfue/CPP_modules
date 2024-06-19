/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:54:18 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/19 16:18:02 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* Personal member functions */

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now in gatekeeper mode" << std::endl;
}



/* Claptraps members functions */

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0)
	{
		this->_energyPoints -= 1;
		std::cout << "ScavTrap " << this->get_name() << " attacks " << target \
		<< ", causing " << this->get_attackDamage() << " points of damage !" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->get_name() << " tries to attack but is too tired" << std::endl;
	}
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	if (this->_hitPoints > 0)
		std::cout << "ScavTrap " << this->get_name() << " got hit and took " << amount << " points of damage" << std::endl;
	else
		std::cout << "ScavTrap " << this->get_name() << " got hit by "  << amount << " points of damage and died" << std::endl;

}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0)
	{
		this->_energyPoints -= 1;
		this->_hitPoints += amount;
		std::cout << "ScavTrap " << this->get_name() << " repaired itself and gained " << amount << " energy points back" << std::endl;
	}
	else 
	{
		std::cout << "ScavTrap " << this->get_name() << " tries to repair itself but is too tired" << std::endl;
	}
}

/* Constructors  */

ScavTrap::ScavTrap(std::string name) :  _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(void) : _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	std::cout << "ScavTrap default constructor called" << std:: endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &src)
{
	if (this != &src)
	{
		_name = src._name;
		_hitPoints = src._hitPoints;
		_energyPoints = src._energyPoints;
		_attackDamage = src._attackDamage;
	}
	std::cout << "ScavTrap copy constructor called" << std::endl;
	return *this;
}

/*  Destructor */
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destroyed" << std::endl;
}


/* Setters and getters */
std::string ScavTrap::get_name(void) const
{
	return _name;
}

void ScavTrap::set_name(const std::string name)
{
	_name = name;
}

int ScavTrap::get_hitPoints(void) const
{
	return _hitPoints;
}

void ScavTrap::set_hitPoints(const int hitPoints)
{
	_hitPoints = hitPoints;
}

int ScavTrap::get_energyPoints(void) const
{
	return _energyPoints;
}

void ScavTrap::set_energyPoints(const int energyPoints)
{
	_energyPoints = energyPoints;
}

int ScavTrap::get_attackDamage(void) const
{
	return _attackDamage;
}

void ScavTrap::set_attackDamage(const int attackDamage)
{
	_attackDamage = attackDamage;
}
