/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:16:40 by cefuente          #+#    #+#             */
/*   Updated: 2024/05/22 14:12:36 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	
	Harl	harl;
	
	if (argc != 2)
		return 1;
	switch (argv[1]) {
		case "WARNING" :
			harl.complain("WARNING", 1);
	}
	return 0;
}