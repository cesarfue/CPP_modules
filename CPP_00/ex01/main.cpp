/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:13:59 by cesar             #+#    #+#             */
/*   Updated: 2024/05/14 17:23:42 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 

enum Command {
	ADD,
	SEARCH,
	EXIT,
	INVALID
};

Command	get_command(const std::string& str) {
	if (str == "ADD") return ADD;
	else if (str == "SEARCH") return SEARCH;
	else if (str == "EXIT") return EXIT;
	else return INVALID;
};

int	main(int argc, char **argv) {
	if (argc == 1)
		return 0;
	Command cmd;
	while (1) {
		std::string input;
		std::getline(std::cin, input);
		cmd = get_command(input);
		switch (cmd) {
			case ADD: 
				add();
				break;
			case SEARCH:
				search();
				break;
			case EXIT:
				exit(0);
				break;
		}
	}
}