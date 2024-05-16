/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:13:59 by cesar             #+#    #+#             */
/*   Updated: 2024/05/16 10:19:38 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include <iomanip>
#include <sstream>
#include <cstdlib>
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
		return (str.substr(0, 9) + ".");
	return (str);
}

int	add(PhoneBook& book)
{
	static int i = -1;

	if (++i == 8) { i = 0; }
	book.deleteContact(i);

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
	int index;

	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|";
	std::cout << std::endl;
	std::cout << std::setw(40) << "   _________________________________________";
	std::cout << std::endl;
	for (int i = 0; i < 8; i++) {
		if (!book.contact[i].isEmpty()) {
			std::cout << std::setw(10) << i << "|";
			std::cout << std::setw(10) << trym(book.contact[i].getFirstName()) << "|";
			std::cout << std::setw(10) << trym(book.contact[i].getLastName()) << "|";
			std::cout << std::setw(10) << trym(book.contact[i].getNickname()) << "|";
			std::cout << std::endl;
		}
	}
	std::cout << "Enter contact index for more informations : ";
	std::string input;
	std::getline(std::cin, input);
	std::stringstream ss(input);
	if (!(ss >> index)) {
		std::cerr << "Invalid contact index\n";
		return (0);
	}
	if (index <= 0 || index > 7) {
		std::cout << "Invalid contact index\n";
		return (0);
	}
	std::cout << "First Name : " << book.contact[index].getFirstName() << std::endl;
	std::cout << "Last Name : " << book.contact[index].getLastName() << std::endl;
	std::cout << "Nickname : " << book.contact[index].getNickname() << std::endl;
	std::cout << "Phone number : " << book.contact[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret : " << book.contact[index].getDarkestSecret() << std::endl;
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