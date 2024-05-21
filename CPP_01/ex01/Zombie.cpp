/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:33:52 by cefuente          #+#    #+#             */
/*   Updated: 2024/05/19 07:36:32 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	Zombie::setName(name);
	std::cout << "Zombie object " << this->name << " created" << std::endl;
}

Zombie::Zombie(void) {
	name = "(null)";
}

Zombie::~Zombie(void) {
	std::cout << Zombie::name << " was destroyed by law of god" << std::endl;
}

void	Zombie::setName( std::string name) {
	this->name = name;
}

std::string	Zombie::getName(void) {
	return name;
}

void	Zombie::announce(void) {
	std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
