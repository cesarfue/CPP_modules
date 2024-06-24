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

int main() {
  /* 	std::cout << "_________Animalz________\n" << std::endl;
          const Animal* meta = new Animal();
          const Animal* j = new Dog();
          const Animal* i = new Cat();

          std::cout << "\nJ->type is " << j->getType() << " " << std::endl;
          std::cout << "I->type is " << i->getType() << " \n" << std::endl;

          i->makeSound(); //will output the cat sound!
          j->makeSound();
          meta->makeSound();
          std::cout << std::endl;

          delete meta;
          delete j;
          delete i;

          std::cout << std::endl << "________ Wrong Animalz ________\n" <<
     std::endl;

      const WrongAnimal *wrong = new WrongAnimal();
      const WrongAnimal *wrongCat = new WrongCat();

      std::cout << "\nWrong Type: " << wrong->getType() << " " << std::endl;
      std::cout << "WrongCat Type: " << wrongCat->getType() << " \n" <<
     std::endl; wrong->makeSound(); wrongCat->makeSound(); std::cout <<
     std::endl;

      delete  wrong;
      delete  wrongCat; */

  const Animal *j = new Dog();
  const Animal *i = new Cat();

  Dog basic;
  { Dog tmp = basic; }

  const Animal *animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
  for (int i = 0; i < 4; i++) {
    delete animals[i];
  }

  delete j;
  delete i;
  return 0;
}
