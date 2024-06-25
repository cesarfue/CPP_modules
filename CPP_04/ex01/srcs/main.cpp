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
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
  Animal *animals[8];

  for (int i = 0; i < 2; ++i) {
    animals[i] = new Dog();
  }

  for (int i = 2; i < 4; ++i) {
    animals[i] = new Cat();
  }

  WrongAnimal wrongAnimal;

  wrongAnimal = new WrongCat();

  wrongAnimal.makeSound();

  delete animals[];
  delete wrongAnimal;

  return 0;
}
