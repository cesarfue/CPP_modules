/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:23:39 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/19 11:24:55 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractBits = 8;

/* Constructors */

Fixed::Fixed(void): _rawBits(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cpy)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed::Fixed(const int nbr)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_rawBits = nbr << this->_fractBits;
}

Fixed::Fixed(const float nbr)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(nbr * (1 << this->_fractBits));
}

/* Destructor  */
Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}

/* Getters - Setters */
int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	_rawBits = raw;
}

/* Convertion */

float	Fixed::toFloat(void) const
{
	return ((float)this->_rawBits / (float)(1 << this->_fractBits));
}

int		Fixed::toInt(void) const
{
	return (this->_rawBits >> this->_fractBits);
}


/* Overloading operators */



	/* Output stream  */
std::ostream	&operator<<(std::ostream &out, Fixed const &Fixed)
{
	out << Fixed.toFloat();
	return (out);
}

	/* Copy assignment operator */
Fixed	&Fixed::operator=(const Fixed &src)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_rawBits = src.getRawBits();
	return (*this);
}


	/* Comparison operators  */
bool Fixed::operator>(Fixed src) const
{
	return (this->toFloat() > src.toFloat());
}

bool Fixed::operator<(Fixed src) const
{
	return (this->toFloat() < src.toFloat());
}

bool Fixed::operator>=(Fixed src) const
{
	return (this->toFloat() >= src.toFloat());
}

bool Fixed::operator<=(Fixed src) const
{
	return (this->toFloat() <= src.toFloat());
}

bool Fixed::operator==(Fixed src) const
{
	return (this->toFloat() == src.toFloat());
}

bool Fixed::operator!=(Fixed src) const
{
	return (this->toFloat() != src.toFloat());
}


	/* Arithmetic operators */
float	Fixed::operator+(Fixed src) const
{
	return (this->toFloat() + src.toFloat());
}

float	Fixed::operator-(Fixed src) const
{
	return (this->toFloat() - src.toFloat());
}

float	Fixed::operator*(Fixed src) const
{
	return (this->toFloat() * src.toFloat());
}

float	Fixed::operator/(Fixed src) const
{
	return (this->toFloat() / src.toFloat());
}

	/* Pre and post incrementation operators */

			/* Pre increment / pre decrement */
Fixed	Fixed::operator++()
{
	this->_rawBits++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->_rawBits--;
	return (*this);
}
			/* Post increment / Post decrement */
Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;

	this->_rawBits++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;

	this->_rawBits--;
	return (tmp);
}

/* Min and max */

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return (a.toFloat() < b.toFloat() ? a : b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a.toFloat() < b.toFloat() ? a : b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return (a.toFloat() > b.toFloat() ? a : b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a.toFloat() > b.toFloat() ? a : b);
}

