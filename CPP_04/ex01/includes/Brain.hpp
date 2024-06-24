/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 10:25:40 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/21 16:20:48 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Brain {
private:
  std::string _ideas[100];

public:
  Brain(void);
  Brain(const Brain &src);
  Brain &operator=(const Brain &src);
};
