/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:13:08 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/21 09:59:04 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal {
protected:
  std::string _type;

public:
  virtual void makeSound(void) const;
  Animal(void);
  Animal(std::string type);
  Animal(const Animal &src);
  virtual ~Animal(void);
  Animal &operator=(const Animal &src);

  void setType(std::string type);
  std::string getType(void) const;
};
