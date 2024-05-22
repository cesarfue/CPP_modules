/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:16:40 by cefuente          #+#    #+#             */
/*   Updated: 2024/05/22 10:43:12 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

	
std::string levels[] = {
	"debug",
	"info",
	"warning",
	"error"
};

int	main(void) {

	
	Harl	harl;
	
	for (size_t i = 0; i < 4; ++i)
		harl.complain(levels[i]);

	return 0;
}