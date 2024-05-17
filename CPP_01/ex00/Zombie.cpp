/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:33:52 by cefuente          #+#    #+#             */
/*   Updated: 2024/05/17 13:35:07 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) {
	Zombie::name = name;
}

Zombie::~Zombie( void ) {
	std::cout << Zombie::name << " was destroyed by law of god" << std::endl;
}