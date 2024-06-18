/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:34:32 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/18 14:32:24 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

	private	:
		std::string name;

	public	:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);

		void	announce(void);
		void 	setName(std::string name);
		std::string getName(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif