/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:33:06 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/18 12:25:27 by cefuente         ###   ########.fr       */
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

	for (int i =  0; i < 4; ++i) {
		zombie[i] = NewZombie(ZombieNames[i]);
		randomChump(RandomChumpsNames[i]);
	}

	for (int i = 0; i < 4; ++i) {
		zombie[i]->announce();
	}

	for (int i = 0; i < 4; ++i) {
		delete(zombie[i]);
	}

	return 0;
}