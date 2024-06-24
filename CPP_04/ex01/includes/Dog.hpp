/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:27:56 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/21 16:13:44 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal {
private:
  Brain *_brain;
  std::string _type;

public:
  void makeSound(void) const;
  Dog(void);
  Dog(const Dog &src);
  Dog &operator=(const Dog &src);
  ~Dog(void);
};
