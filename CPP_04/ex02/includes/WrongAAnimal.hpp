/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.hpp                                    :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 10:08:50 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/21 10:10:16 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAAnimal {
protected:
  std::string _type;

public:
  virtual void makeSound(void) const = 0;
  WrongAAnimal(void);
  WrongAAnimal(std::string type);
  WrongAAnimal(const WrongAAnimal &src);
  virtual ~WrongAAnimal(void);
  WrongAAnimal &operator=(const WrongAAnimal &src);

  void setType(std::string type);
  std::string getType(void) const;
};
