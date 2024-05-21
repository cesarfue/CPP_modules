/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 08:30:04 by cesar             #+#    #+#             */
/*   Updated: 2024/05/21 08:12:53 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &weapon): _type(weapon) {
}

Weapon::~Weapon(void) {
}

const std::string& Weapon::getType(void) const {
	return _type ;
}

void		Weapon::setType(std::string type) {
	Weapon::_type = type;
}