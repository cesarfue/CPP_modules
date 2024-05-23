/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:16:40 by cefuente          #+#    #+#             */
/*   Updated: 2024/05/23 10:54:59 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

size_t	get_index(char *arg) {

	size_t i = 0;
	for (; i < 4; ++i) {
		if (levels[i] == arg) {
			break ;
		}
	}
	return i;
}

int	main(int argc, char **argv) {
	
	Harl	harl;
	
	if (argc != 2) {
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}

	size_t index = get_index(argv[1]);
	if (index < 0 || index > 3) {
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return 0;
	}
	for (; index < 4; ++index) {
		harl.complain(index);
	}
	return 0;
}