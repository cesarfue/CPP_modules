/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:17:17 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/20 11:27:37 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("")
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
	return _type;
}

void Animal::setType(const std::string type)
{
	_type = type;
}
