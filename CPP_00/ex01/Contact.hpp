/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:47:55 by cesar             #+#    #+#             */
/*   Updated: 2024/06/18 10:40:49 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>


class Contact {
	private :
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

	public : 
		std::string getFirstName(void);
		void setFirstName(const std::string& str);

		std::string getLastName(void);
		void setLastName(const std::string& str);

		std::string getNickname(void);
		void setNickname(const std::string& str);

		std::string getPhoneNumber(void);
		void setPhoneNumber(const std::string& str);

		std::string getDarkestSecret(void);
		void setDarkestSecret(const std::string& str);

		bool isEmpty();

		void reset() { 
			first_name = "";
			last_name = "";
			nickname = "";
			phone_number = "";
			darkest_secret = "";
		}
	
};	

#endif