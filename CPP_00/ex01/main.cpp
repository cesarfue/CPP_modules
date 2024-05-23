/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:13:59 by cesar             #+#    #+#             */
/*   Updated: 2024/05/23 13:44:18 by cefuente         ###   ########.fr       */
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

typedef void (Contact::*Setter)(const std::string&);

Setter	setters[] = {
	&Contact::setFirstName,
	&Contact::setLastName,
	&Contact::setNickname,
	&Contact::setPhoneNumber,
	&Contact::setDarkestSecret
};

typedef std::string (Contact::*Getter)(void);

Getter	getters[] = {
	&Contact::getFirstName,
	&Contact::getLastName, 
	&Contact::getNickname,
	&Contact::getPhoneNumber,
	&Contact::getDarkestSecret
};

std::string prompts[] = {
	"First name",
	"Last name",
	"Nickname",
	"Phone number",
	"Darkest secret"
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

bool	is_input_empty(std::string& str) {
	for (size_t i = 0; i < str.length(); i++) {
		if (!isspace(str[i])) { return false; }
	}
	std::cout << "Invalid entry";
	std::cout << std::endl;
	return true; 
}

std::string	add_entry(int iContact, int iPrompt, PhoneBook& book, std::string& str) {
	std::getline(std::cin, str);
	if (is_input_empty(str) == true) { return ""; }
	else { (book.contact[iContact].*setters[iPrompt])(str); }
	return str;
}

int	add(PhoneBook& book)
{
	std::string str;
	static int iContact = -1;

	if (++iContact == 8) { iContact = 0; }
	book.deleteContact(iContact);
	
	for (int iPrompt = 0; iPrompt < 5; ++iPrompt) {
		std::cout << prompts[iPrompt] << " : ";
		while (add_entry(iContact, iPrompt, book, str).empty()) {
			std::cout << prompts[iPrompt] << " : ";
			if (str == "EXIT") { exit(0); }
		}
	}
	return (0);	
}

int	search(PhoneBook& book)
{
	int index;

	std::cout << '\n';
	std::cout << std::setw(10) << "Index" << "|";
	for (int iPrompt = 0; iPrompt < 3; ++iPrompt) {
		std::cout << std::setw(10) << prompts[iPrompt] << "|";
	}
	std::cout << std::endl;
	std::cout << std::setw(40) << "   _________________________________________";
	std::cout << std::endl;
	for (int i = 0; i < 8; i++) {
		if (!book.contact[i].isEmpty()) {
			std::cout << std::setw(10) << i << "|";
			std::cout << std::setw(10) << trym(book.contact[i].getFirstName()) << "|";
			std::cout << std::setw(10) << trym(book.contact[i].getLastName()) << "|";
			std::cout << std::setw(10) << trym(book.contact[i].getNickname()) << "|\n";
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
	if (index < 0 || index > 7) {
		std::cout << "Invalid contact index\n";
		return (0);
	}
	std::cout << '\n';
	for (int iPrompt = 0; iPrompt < 4; ++iPrompt) {
		std::cout << prompts[iPrompt] << " : " << (book.contact[index].*getters[iPrompt])() << std::endl;
	}
	std::cout << std::endl;
	return (0);
}

int	main(void) {

	PhoneBook book;
	Command cmd;

	std::string input;
	while (getline(std::cin, input)) {
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