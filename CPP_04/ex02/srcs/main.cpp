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

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
  const AAnimal *j = new Dog();
  const AAnimal *i = new Cat();

  delete j; // should not create a leak
  delete i;

  Dog basic;
  { Dog tmp = basic; }

  const AAnimal *AAnimals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
  for (int i = 0; i < 4; i++) {
    delete AAnimals[i];
  }

  return 0;
}
