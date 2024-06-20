/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:29:37 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/20 11:35:46 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::MakeSound(void)
{
	std::cout << "WAF" << std::endl;
}

Dog::Dog(void) : _type("")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const std::string type) : _type(type)
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : _type(src._type)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &src)
{
	if (this != &src)
	{
		_type = src._type;
	}
	std::cout << "Dog copy constructor called" << std::endl;
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog destroyed" << std::endl;
}
