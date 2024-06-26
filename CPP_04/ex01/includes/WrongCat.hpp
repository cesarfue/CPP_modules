/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 10:10:23 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/21 10:15:06 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal {
private:
  Brain *_brain;

public:
  void makeSound(void) const;
  WrongCat(void);
  WrongCat(const WrongCat &src);
  WrongCat &operator=(const WrongCat &src);
  ~WrongCat(void);
};
