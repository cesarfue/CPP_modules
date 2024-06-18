/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:15:09 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/18 16:58:19 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"

class	Fixed {
	private :
		int	_rawBits;
		static const int	_fractBits;
	public :
		Fixed(const Fixed& cpy);
		Fixed(void);
		~Fixed(void);
		Fixed& operator=(const Fixed &src);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};