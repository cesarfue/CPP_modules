/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:54:01 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/19 16:12:43 by cefuente         ###   ########.fr       */
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
		void	takeDamage(unsigned int amount);
		void 	beRepaired(unsigned int amount);

		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &src);
		ScavTrap(void);
		~ScavTrap(void);
		ScavTrap	&operator=(const ScavTrap &src);

		std::string	get_name(void) const;
		void		set_name(const std::string name);
		int			get_hitPoints(void) const;
		void		set_hitPoints(const int hitPoints);
		int			get_energyPoints(void) const;
		void		set_energyPoints(const int energyPoints);
		int			get_attackDamage(void) const;
		void		set_attackDamage(const int attackDamage);
	
};