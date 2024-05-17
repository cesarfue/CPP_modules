/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:34:28 by cefuente          #+#    #+#             */
/*   Updated: 2024/05/17 13:45:53 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	NewZombie( std::string name ) {
	Zombie	*newZombie = new Zombie(name);
	newZombie->announce();
	return newZombie;
}