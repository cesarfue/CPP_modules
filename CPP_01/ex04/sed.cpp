/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:02:04 by cesar             #+#    #+#             */
/*   Updated: 2024/05/21 14:13:38 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void	sed(const std::string& input_filename, const std::string& s1, const std::string& s2) {

	std::ifstream input(input_filename.c_str());
	if (!input.is_open()) {
		throw std::runtime_error(" file can't be opened");
	}
	std::string output_filename = std::string(input_filename) + ".replace";
	std::ofstream output(output_filename.c_str());
	if (!output.is_open()) {
		throw std::runtime_error(" file couldn't be created");
	}
	std::string content((std::istreambuf_iterator<char>(input)), \
		std::istreambuf_iterator<char>());

	size_t	index = 0;
	index = content.find(s1, index);
	while (index != std::string::npos) {
		content.erase(index, s1.length());
		content.insert(index, s2);
		index += s2.length();
		index = content.find(s1, index);
	}
	output << content;
	
	output.close();
	input.close();
}