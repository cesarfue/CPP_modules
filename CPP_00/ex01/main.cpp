/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:13:59 by cesar             #+#    #+#             */
/*   Updated: 2024/05/15 14:58:59 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contact.hpp"

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

std::string trym(const std::string& str) {
	if (str.length() > 10)
		return (str.substr(0, 7) + "...");
	return (str);
}

int	add(PhoneBook& book)
{
	static int i = 0;

	for (;i < 8; i++) {
		if (book.contact[i].isEmpty()) {
			break ;
		}
		else if (i == 7) {
			i = 0;
			book.deleteContact(i); 
			break ;
		}
	}
	std::string first_name;
	std::cout << "First name : ";
	std::getline(std::cin, first_name);
	book.contact[i].setFirstName(first_name);

	std::string last_name;
	std::cout << "Last name : ";
	std::getline(std::cin, last_name);
	book.contact[i].setLastName(last_name);

	std::string nickname;
	std::cout << "Nickname : ";
	std::getline(std::cin, nickname);
	book.contact[i].setNickname(nickname);

	std::string phone_number;
	std::cout << "Phone number : ";
	std::getline(std::cin, phone_number);
	book.contact[i].setPhoneNumber(phone_number);

	std::string darkest_secret;
	std::cout << "Darkest secret : ";
	std::getline(std::cin, darkest_secret);
	book.contact[i].setDarkestSecret(darkest_secret);

	return (0);	
}

int	search(PhoneBook& book)
{
	for (int i = 0; i < 8; i++) {
		if (!book.contact[i].isEmpty()) {
			std::cout << std::setw(10) << i << "|";
			std::cout << std::setw(10) << trym(book.contact[i].getFirstName()) << "|";
			std::cout << std::setw(10) << trym(book.contact[i].getLastName()) << "|";
			std::cout << std::setw(10) << trym(book.contact[i].getNickName()) << "|";
			std::cout << std::endl;
			std::cout << "Enter contact index for more informations : "
			std::int index;
			std::getline(std::cin, index); 
		}
	}
	return (0);
}

int	main(void) {

	PhoneBook book;
	Command cmd;

	std::string input;
	while (1) {
		std::getline(std::cin, input);
		cmd = get_command(input);
		switch (cmd) {
			case ADD: 
				add(book);
				break;
			case SEARCH:
				search(book);
				break;
			case INVALID:
				break;
			case EXIT:
				exit(0);
				break;
		}
	}
	return (0);
}