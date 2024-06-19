/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:15:09 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/19 09:45:12 by cefuente         ###   ########.fr       */
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

		/* Overloading operators  */
		Fixed	&operator=(const Fixed &src);
		friend std::ostream	&operator<<(std::ostream&, Fixed const &fixed);

		/* Getters / Setters */
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		/* Other functions */
		float	toFloat(void) const;
		int		toInt(void) const;
};
