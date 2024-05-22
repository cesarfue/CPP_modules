/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:16:40 by cefuente          #+#    #+#             */
/*   Updated: 2024/05/22 09:26:35 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.cpp"

	

int	main(void) {

	std::array<std::string, 4> levels = {
		"debug",
		"info",
		"warning",
		"error"
	};
	
	Harl	harl;
	
	for (size_t i = 0; i < 4; ++i)
		harl.complain(levels[i]);

	return 0;
}