/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:12:38 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/21 10:16:51 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongCat.hpp"

int main() {
  std::cout << "_________Animalz________\n" << std::endl;
  const Animal *Jack = new Dog();
  const Animal *Bill = new Cat();

  std::cout << "\nJ->type is " << Jack->getType() << " " << std::endl;
  std::cout << "I->type is " << Bill->getType() << " \n" << std::endl;

  Bill->makeSound();
  Jack->makeSound();
  std::cout << std::endl;

  delete Jack;
  delete Bill;

  std::cout << std::endl << "________ Wrong Animalz ________\n" << std::endl;

  const WrongAnimal *wrongCat = new WrongCat();

  std::cout << "WrongCat Type: " << wrongCat->getType() << " \n" << std::endl;
  wrongCat->makeSound();
  std::cout << std::endl;

  delete wrongCat;
  return 0;
}
