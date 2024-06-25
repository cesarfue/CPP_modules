/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:17:46 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/19 15:12:40 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
  ClapTrap Jack("Jack");
  ClapTrap Zack("Zack");

  Jack.set_attackDamage(1);
  while (Jack.get_energyPoints() > 0) {
    Jack.attack("Zack");
    Zack.takeDamage(Jack.get_attackDamage());
    Zack.beRepaired(1);
  }
  Zack.set_energyPoints(10);
  Zack.set_attackDamage(100000);
  Zack.attack("Jack");
  Jack.takeDamage(Zack.get_attackDamage());
  return (0);
}
