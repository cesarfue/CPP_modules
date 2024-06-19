/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:23:39 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/19 09:47:29 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractBits = 8;

/* Constructors */

Fixed::Fixed(void): _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = nbr << this->_fractBits;
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(nbr * (1 << this->_fractBits));
}

/* Destructor  */
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

/* Overloading operators */
Fixed	&Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_rawBits = src.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &Fixed)
{
	out << Fixed.toFloat();
	return (out);
}

/* Getters - Setters */
int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_rawBits = raw;
}

/* Member functions */

float	Fixed::toFloat(void) const
{
	return ((float)this->_rawBits / (float)(1 << this->_fractBits));
}

int		Fixed::toInt(void) const
{
	return (this->_rawBits >> this->_fractBits);
}