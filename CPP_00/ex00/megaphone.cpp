/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:45:17 by cesar             #+#    #+#             */
/*   Updated: 2024/05/15 08:14:42 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main (int argc, char **argv) {
	if (!argv[0])
		return (0);
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; argv[i]; i++) {
		char *str = argv[i];
		for (int j = 0; str[j]; j++) {
			str[j] = toupper(str[j]);
			std::cout << str[j];
		}
	}
	return (0);
}