/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:33:06 by cefuente          #+#    #+#             */
/*   Updated: 2024/05/19 07:43:08 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	// Create the zombies
	int size = 10;
	Zombie	*Horde = zombieHorde(size, "Mr Smith");
	
	for (int i = 0; i < size; ++i) { 
		Horde[i].announce();
	}
	// Destory the allocated Zombies
	delete[] Horde;

	return 0;
}