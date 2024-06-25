/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:17:19 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/19 14:06:15 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap {
private:
  std::string _name;
  int _hitPoints;
  int _energyPoints;
  int _attackDamage;

public:
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

  ClapTrap(std::string name);
  ClapTrap(const ClapTrap &src);
  ClapTrap(void);
  ~ClapTrap(void);
  ClapTrap &operator=(const ClapTrap &src);

  std::string get_name(void) const;
  void set_name(const std::string name);
  int get_hitPoints(void) const;
  void set_hitPoints(const int hitPoints);
  int get_energyPoints(void) const;
  void set_energyPoints(const int energyPoints);
  int get_attackDamage(void) const;
  void set_attackDamage(const int attackDamage);
};
