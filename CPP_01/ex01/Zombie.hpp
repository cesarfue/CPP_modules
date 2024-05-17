/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:34:32 by cefuente          #+#    #+#             */
/*   Updated: 2024/05/17 13:54:05 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

	private	:
		std::string name;

	public	:
		Zombie( std::string name );
		~Zombie( void );

		void	announce( void ) {
			std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
		}
		void 		setName(std::string str) { name = str; }
		std::string getName( void ) { return name; }
};

Zombie	*NewZombie( std::string name );
void	randomChump( std::string name );

#endif