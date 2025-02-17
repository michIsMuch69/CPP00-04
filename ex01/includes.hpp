/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 09:36:09 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/17 09:43:34 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_HPP
#define INCLUDES_HPP

#include <iostream>
#include <string>
#include <istream>
#include <cstdio>
#include <iomanip>
#include <sstream>

enum TruncateOption
{
    TRUNC_ON,
    TRUNC_OFF
};


#include "Contact.hpp"
#include "PhoneBook.hpp"


#define COLOR_RED     "\033[1;31m"
#define COLOR_GREEN   "\033[1;32m"
#define COLOR_YELLOW  "\033[1;33m"
#define COLOR_BLUE    "\033[1;34m"
#define COLOR_MAGENTA "\033[1;35m"
#define COLOR_CYAN    "\033[1;36m"
#define COLOR_RESET   "\033[0m"



bool	is_only_ws(const std::string &string);
bool	is_only_digit(const std::string &string);
void	parse_info(std::string &string);
void    separate_line();


#endif