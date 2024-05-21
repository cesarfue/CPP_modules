/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 08:31:37 by cesar             #+#    #+#             */
/*   Updated: 2024/05/21 08:58:24 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {

	private :
		std::string _type;
	
	public :
		Weapon(const std::string &weapon);
		~Weapon(void);
		void		setType(std::string type);
		const std::string& getType(void) const;
    };

#endif