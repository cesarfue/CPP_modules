/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:12:38 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/21 16:29:21 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
  const Animal *j = new Dog();
  const Animal *i = new Cat();

  delete j; // should not create a leak
  delete i;

  Dog basic;
  { Dog tmp = basic; }

  const Animal *animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
  for (int i = 0; i < 4; i++) {
    delete animals[i];
  }

  return 0;
}
