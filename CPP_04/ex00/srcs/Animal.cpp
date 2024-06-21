/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:17:17 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/21 08:56:58 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void	Animal::makeSound(void) const
{
	std::cout << "Animal->MakeSound called" << std::endl;
}

Animal::Animal(void) : _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string type) : _type(type)
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &src) : _type(src._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &src)
{
	if (this != &src)
	{
		_type = src._type;
	}
	std::cout << "Animal copy constructor called" << std::endl;
	return *this;
}

Animal::~Animal(void)
{
	std::cout << "Animal destroyed" << std::endl;
}

std::string Animal::getType(void) const
{
	return this->_type;
}

void Animal::setType(const std::string type)
{
	_type = type;
}
