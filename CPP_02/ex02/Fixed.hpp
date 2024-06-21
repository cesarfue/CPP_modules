/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:15:09 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/21 10:04:23 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class	Fixed {
	private :

		int					_rawBits;
		static const int	_fractBits;

	public :

		/* Constructors */
		Fixed(const Fixed& cpy);
		Fixed(void);
		Fixed(const int nbr);
		Fixed(const float nbr);

		/* Destructor */
		~Fixed(void);

		/* Getters / Setters */
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		/* Other functions */
		float	toFloat(void) const;
		int		toInt(void) const;

		/* Overloading operators  */

			/* Copy assignment operator */
		Fixed	&operator=(const Fixed &src);
			/* Comparison operators */
		bool	operator>(Fixed src) const;
		bool	operator<(Fixed src) const;
		bool	operator>=(Fixed src) const;
		bool	operator<=(Fixed src) const;
		bool	operator==(Fixed src) const;
		bool	operator!=(Fixed src) const;
			/* Arithmetic operators */
		float	operator+(Fixed src) const;
		float	operator-(Fixed src) const;
		float	operator*(Fixed src) const;
		float	operator/(Fixed src) const;
			/* Pre and post incrementation operators */
				/* Pre increment / pre decrement */
		Fixed	operator++();
		Fixed	operator--();
				/* Post decrement / post decrement */
		Fixed	operator++(int);
		Fixed	operator--(int);
		
		/* Other functions */
		static Fixed	&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed	&max(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);

};

	/* Output stream  */
std::ostream	&operator<<(std::ostream&, Fixed const &fixed);