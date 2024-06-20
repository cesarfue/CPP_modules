/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:32:31 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/20 11:35:22 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::MakeSound(void)
{
	std::cout << "MOEW" << std::endl;
}

Cat::Cat(void) : _type("")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const std::string type) : _type(type)
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : _type(src._type)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &src)
{
	if (this != &src)
	{
		_type = src._type;
	}
	std::cout << "Cat copy constructor called" << std::endl;
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat destroyed" << std::endl;
}
