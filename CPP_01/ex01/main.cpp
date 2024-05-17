/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:33:06 by cefuente          #+#    #+#             */
/*   Updated: 2024/05/17 14:32:01 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	
	Zombie	*zombie[4];

	std::string ZombieNames[] = {
		"BALDUR THE LIMB",
		"HEROK THE MEAT",
		"RAGNAR THE ROK",
		"ALABIMBA THE SCArY"
	};
	std::string RandomChumpsNames[] = {
		"Jeff",
		"Garrison",
		"Steph",
		"Momo"
	};

	// Create the zombies
	for (int i =  0; i < 4; ++i) {
		zombie[i] = NewZombie(ZombieNames[i]);
		randomChump(RandomChumpsNames[i]);
	}

	// Destory the allocated Zombies
	for (int i = 0; i < 4; ++i) {
		delete(zombie[i]);
	}

	return 0;
}