/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 10:08:50 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/21 10:10:16 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal {
protected:
  std::string _type;

public:
  virtual void makeSound(void) const;
  WrongAnimal(void);
  WrongAnimal(std::string type);
  WrongAnimal(const WrongAnimal &src);
  virtual ~WrongAnimal(void);
  WrongAnimal &operator=(const WrongAnimal &src);

  void setType(std::string type);
  std::string getType(void) const;
};
