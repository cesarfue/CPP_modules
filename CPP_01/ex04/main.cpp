/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:02:25 by cesar             #+#    #+#             */
/*   Updated: 2024/05/21 13:35:06 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Error : wrong number of arguments" << std::endl;
		return 1;
	}
	try {
		sed(argv[1], argv[2], argv[3]);
	} catch (const std::exception &exc) {
		std::cerr << "Error :" << exc.what() << std::endl;
	}
	return 0;
}