/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 08:10:49 by cesar             #+#    #+#             */
/*   Updated: 2024/05/19 08:26:30 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	
	std::string str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "\nMemory addresses : \n" << \
		"&str is " << &str << '\n' << \
		"&stringPTR	is " << stringPTR << '\n' << \
		"&stringREF is " << &stringREF << std::endl;

	std::cout << "\nValues : \n" << \
		"str is " << str << '\n' << \
		"stringPTR is " << *stringPTR << '\n' << \
		"stringREF is " << stringREF << '\n' << std::endl;
	
	return 0;
	
}