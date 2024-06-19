/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:29:50 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/19 16:35:58 by cefuente         ###   ########.fr       */
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
		void	takeDamage(unsigned int amount);
		void 	beRepaired(unsigned int amount);

		FragTrap(std::string name);
		FragTrap(const FragTrap &src);
		FragTrap(void);
		~FragTrap(void);
		FragTrap	&operator=(const FragTrap &src);

		std::string	get_name(void) const;
		void		set_name(const std::string name);
		int			get_hitPoints(void) const;
		void		set_hitPoints(const int hitPoints);
		int			get_energyPoints(void) const;
		void		set_energyPoints(const int energyPoints);
		int			get_attackDamage(void) const;
		void		set_attackDamage(const int attackDamage);
	
};