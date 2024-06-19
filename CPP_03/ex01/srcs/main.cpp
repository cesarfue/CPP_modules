/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:17:46 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/19 16:23:36 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap Jack("Jack");
	ClapTrap Zack("Zack");
	ScavTrap Bibop("Bibop");

/* 	Jack.set_attackDamage(1);
	while (Jack.get_energyPoints() > 0)
	{
		Jack.attack("Zack");
		Zack.takeDamage(Jack.get_attackDamage());
		Zack.beRepaired(1);
	}
	Zack.set_energyPoints(10);
	Zack.set_attackDamage(100000);
	Zack.attack("Jack");
	Jack.takeDamage(Zack.get_attackDamage());

	std::cout << "\n\n" << std::endl; */

	Zack.set_attackDamage(10);
	Jack.set_attackDamage(10);

	Bibop.guardGate();

	Zack.attack("Bibop");
	Bibop.takeDamage(Zack.get_attackDamage());
	Jack.attack("Bibop");
	Bibop.takeDamage(Jack.get_attackDamage());
		
	Bibop.attack("Zack");
	Zack.takeDamage(Bibop.get_attackDamage());
	Bibop.attack("Jack");
	Jack.takeDamage(Bibop.get_attackDamage());

	

	return (0);
}