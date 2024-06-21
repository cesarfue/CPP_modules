/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:11:29 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/21 09:01:50 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <Animal.hpp>

class Cat : public	Animal
{
	private :
		std::string _type;

	public : 
		void makeSound(void) const;
		Cat(void);
		~Cat(void);
};