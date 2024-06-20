/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:29:50 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/20 10:31:07 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private :
		std::string	_name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;

	public :
		/* Self */
		void	highFivesGuys(void);
		/* Inherited */
		void	attack(const std::string& target);

		FragTrap(std::string name);
		FragTrap(const FragTrap &src);
		FragTrap(void);
		~FragTrap(void);
		FragTrap	&operator=(const FragTrap &src);
	
};