/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 08:07:15 by cesar             #+#    #+#             */
/*   Updated: 2024/05/19 07:44:52 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {
	Zombie	*newHorde = new Zombie[N];
	for (int i = 0; i < N; ++i) {
		newHorde[i].setName(name);
	}
	return newHorde;
}

