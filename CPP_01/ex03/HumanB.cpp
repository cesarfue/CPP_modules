/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 08:29:53 by cesar             #+#    #+#             */
/*   Updated: 2024/05/21 08:57:24 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
}

HumanB::~HumanB(void) {
}

void	HumanB::attack(void) {
	std::cout << getName() << " savagely removes body parts with " << \
		_weapon->getType() << std::endl; 
}

void	HumanB::setName(std::string name) {
	_name = name;
}

std::string	HumanB::getName(void) const {
	return _name;
}

void	HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}