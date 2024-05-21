/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 08:29:45 by cesar             #+#    #+#             */
/*   Updated: 2024/05/21 08:57:39 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
}

HumanA::~HumanA(void) {
}

void	HumanA::attack(void) {
	std::cout << getName() << " beheads fuckers with " << \
		_weapon.getType() << std::endl; 
}

void	HumanA::setName(std::string name) {
	_name = name;
}

std::string	HumanA::getName(void) const {
	return _name;
}
