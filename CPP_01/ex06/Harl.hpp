/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:17:26 by cefuente          #+#    #+#             */
/*   Updated: 2024/05/23 10:45:42 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class	Harl {

	private :
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	
	public	:
		Harl(void);
		~Harl(void);
		void complain(size_t index);
};

static std::string levels[] = {
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR"
};

#endif