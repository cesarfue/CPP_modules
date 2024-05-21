/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 08:31:05 by cesar             #+#    #+#             */
/*   Updated: 2024/05/21 08:58:21 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanA {
	
	private :
		std::string _name;
		Weapon &_weapon;

	public :
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void	attack(void);
		void	setName(std::string name);
		std::string	getName(void) const; 
		
		
};


#endif