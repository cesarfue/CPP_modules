/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:59:17 by cefuente          #+#    #+#             */
/*   Updated: 2024/05/23 13:12:07 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::getFirstName(void) {
	return first_name;
}
void	Contact::setFirstName(const std::string& str) {
	first_name = str;
}

std::string	Contact::getLastName(void) {
	return last_name;
}
void	Contact::setLastName(const std::string& str) {
	last_name = str;
}

std::string	Contact::getNickname(void) {
	return nickname;
}
void	Contact::setNickname(const std::string& str) {
	nickname = str;
}

std::string	Contact::getPhoneNumber(void) {
	return phone_number;
}
void	Contact::setPhoneNumber(const std::string& str) {
	phone_number = str;
}

std::string	Contact::getDarkestSecret(void) {
	return darkest_secret;
}
void	Contact::setDarkestSecret(const std::string& str) {
	darkest_secret = str;
}

bool	Contact::isEmpty(void) {
	return first_name.empty();
}