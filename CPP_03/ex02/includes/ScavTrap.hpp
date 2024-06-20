/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:54:01 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/20 10:31:21 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private :
		std::string	_name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;

	public :

		/* Self */
		void	guardGate(void);
		/* Inherited */
		void	attack(const std::string& target);

		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &src);
		ScavTrap(void);
		~ScavTrap(void);
		ScavTrap	&operator=(const ScavTrap &src);
	
};