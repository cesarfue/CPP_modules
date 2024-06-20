/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:27:56 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/20 11:37:16 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <Animal.hpp>

class Dog : public	Animal
{
	private :
		std::string _type;

	public : 
		void MakeSound(void);
		Dog(void);
		Dog(std::string type);
		Dog(const Dog &src);
		~Dog(void);
		Dog		&operator=(const Dog &src);
};