/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:30:22 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/19 17:13:10 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


/* Self */

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << " : Hey give me five\n*CLAAP*\n" << this->_name << " : Yeee that's my boy." << std::endl;	
}

/* Claptraps members functions */

void	FragTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0)
	{
		this->_energyPoints -= 1;
		std::cout << "FragTrap " << this->get_name() << " attacks " << target \
		<< ", causing " << this->get_attackDamage() << " points of damage !" << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << this->get_name() << " tries to attack but is too tired" << std::endl;
	}
}

void	FragTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	if (this->_hitPoints > 0)
		std::cout << "FragTrap " << this->get_name() << " got hit and took " << amount << " points of damage" << std::endl;
	else
		std::cout << "FragTrap " << this->get_name() << " got hit by "  << amount << " points of damage and died" << std::endl;

}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0)
	{
		this->_energyPoints -= 1;
		this->_hitPoints += amount;
		std::cout << "FragTrap " << this->get_name() << " repaired itself and gained " << amount << " energy points back" << std::endl;
	}
	else 
	{
		std::cout << "FragTrap " << this->get_name() << " tries to repair itself but is too tired" << std::endl;
	}
}

/* Constructors  */

FragTrap::FragTrap(std::string name) :  _name(name), _hitPoints(100), _energyPoints(100), _attackDamage(30)
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(void) : _hitPoints(100), _energyPoints(100), _attackDamage(30)
{
	std::cout << "FragTrap default constructor called" << std:: endl;
}

FragTrap::FragTrap(const FragTrap &src) : _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &src)
{
	if (this != &src)
	{
		_name = src._name;
		_hitPoints = src._hitPoints;
		_energyPoints = src._energyPoints;
		_attackDamage = src._attackDamage;
	}
	std::cout << "FragTrap copy constructor called" << std::endl;
	return *this;
}

/*  Destructor */
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destroyed" << std::endl;
}


/* Setters and getters */
std::string FragTrap::get_name(void) const
{
	return _name;
}

void FragTrap::set_name(const std::string name)
{
	_name = name;
}

int FragTrap::get_hitPoints(void) const
{
	return _hitPoints;
}

void FragTrap::set_hitPoints(const int hitPoints)
{
	_hitPoints = hitPoints;
}

int FragTrap::get_energyPoints(void) const
{
	return _energyPoints;
}

void FragTrap::set_energyPoints(const int energyPoints)
{
	_energyPoints = energyPoints;
}

int FragTrap::get_attackDamage(void) const
{
	return _attackDamage;
}

void FragTrap::set_attackDamage(const int attackDamage)
{
	_attackDamage = attackDamage;
}
