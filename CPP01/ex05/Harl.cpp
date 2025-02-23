/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 09:03:44 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/23 09:28:44 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
    _funcPtr[0] = &Harl::debug;
    _funcPtr[1] = &Harl::info;
    _funcPtr[2] = &Harl::warning;
    _funcPtr[3] = &Harl::error;
}

Harl::~Harl()
{
}

levels stringToEnum(const std::string level)
{
	if (level == "DEBUG")
		return (DEBUG);
	if (level == "INFO")
		return (INFO);
	if (level == "WARNING")
		return (WARNING);
	if (level == "ERROR")
		return (ERROR);
	return (UNKNOWN);
}

void Harl::complain(std::string level)
{
    int funcIndex;
    
    funcIndex = stringToEnum(level);
    (this->*_funcPtr[funcIndex])();
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout <<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
 
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    
}

void Harl::error(void)
{
    std::cout <<"This is unacceptable! I want to speak to the manager now." << std::endl;
    
}