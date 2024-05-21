/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:01:47 by cesar             #+#    #+#             */
/*   Updated: 2024/05/21 12:43:46 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP 

# include <iostream>
# include <fstream>
# include <string>

void	sed(const std::string& input_filename, const std::string& s1, const std::string& s2);

#endif