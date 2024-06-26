/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:13:08 by cefuente          #+#    #+#             */
/*   Updated: 2024/06/21 09:59:04 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	AAnimal
{
	private :
		std::string _type;

	public :
		virtual void makeSound(void) const;
		AAnimal(void);
		AAnimal(std::string type);
		AAnimal(const AAnimal &src);
		virtual ~AAnimal(void);
		AAnimal		&operator=(const AAnimal &src);

		void		setType(std::string type);
		std::string	getType(void) const;
};