/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 09:03:41 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/21 13:51:54 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Harl.hpp"

void Harl::setFuncPtr()
{
	this->funcPtr[0] = Harl::info();
	// this->_funcPtr[1] = info();
	// this->_funcPtr[2] = warning;
	// this->_funcPtr[3] = error;
}

void* Harl::getFuncPtr()
{
	return (this->_funcPtr);
}

int	main(void)
{
	Harl harl;

	
	std::cout << harl.getFuncPtr() << std::endl;
		
}