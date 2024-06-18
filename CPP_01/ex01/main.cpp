/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:33:06 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/18 12:29:24 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	int size = 10;
	
	Zombie	*Horde = zombieHorde(size, "Mr Smith");
	
	for (int i = 0; i < size; ++i) { 
		Horde[i].announce();
	}
	delete[] Horde;

	return 0;
}