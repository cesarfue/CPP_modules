/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 10:25:30 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/21 16:22:06 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
  std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &src) {
  *this = src;
  std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &src) {
  if (this != &src) {
    for (int i = 0; i < 100; i++)
      this->_ideas[i] = src._ideas[i];
  }
  std::cout << "Brain copy constructor called" << std::endl;
  return *this;
}

Brain::~Brain(void) { std::cout << "Brain destroyed" << std::endl; }
