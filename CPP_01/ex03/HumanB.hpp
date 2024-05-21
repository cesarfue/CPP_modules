/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 08:31:15 by cesar             #+#    #+#             */
/*   Updated: 2024/05/21 08:58:34 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanB {
	
	private :
		std::string _name;
		Weapon		*_weapon;

	public :
		HumanB(std::string name);
		~HumanB(void);
		void	attack(void);
		void	setName(std::string name);
		void	setWeapon(Weapon &weapon);
		std::string	getName(void) const;
		
		
};


#endif