/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:17:26 by cefuente          #+#    #+#             */
/*   Updated: 2024/05/22 09:23:01 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <map>
# include <array>

class	Harl {

	private :
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	
	public	:
		Harl(void);
		~Harl(void);
		void complain(std::string level);
};	

#endif