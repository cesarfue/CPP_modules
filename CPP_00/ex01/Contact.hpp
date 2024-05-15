/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:47:55 by cesar             #+#    #+#             */
/*   Updated: 2024/05/15 12:59:02 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include "PhoneBook.hpp"

class Contact {
	private :
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

	public : 
		std::string getFirstName() { return first_name; }
		void setFirstName(const std::string& str) { first_name = str; }

		std::string getLastName() { return last_name; }
		void setLastName(const std::string& str) { last_name = str; }

		std::string getNickName() { return nickname; }
		void setNickname(const std::string& str) { nickname = str; }

		std::string getPhoneNumber() { return phone_number; }
		void setPhoneNumber(const std::string& str) { phone_number = str; }

		std::string getDarkestSecret() { return darkest_secret; }
		void setDarkestSecret(const std::string& str) { darkest_secret = str; }

	bool isEmpty() { return first_name.empty(); }

	void reset() { 
		first_name = "";
		last_name = "";
		nickname = "";
		phone_number = "";
		darkest_secret = "";
	}
	
};	

#endif