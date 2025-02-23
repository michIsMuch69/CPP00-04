/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 09:03:41 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/23 09:28:29 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Harl.hpp"


int	main(int argc, char **argv)
{
	(void)argc;

	if (argc != 2)
		return ((std::cerr << "Only one argument needed" << std::endl), 1);
		
	Harl harl;
	std::string level;	
		
	
	level = argv[1];
	
	// return ((std::cerr << "Unknown command" << std::endl), 1);
	
	harl.complain(level);

	
		
}