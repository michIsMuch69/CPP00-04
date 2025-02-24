/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 09:03:41 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/24 12:30:21 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Harl.hpp"


int	main(int argc, char **argv)
{
	if (argc != 2)
		return ((std::cerr << "Number of arguments is invalid" << std::endl), 1);
	 			
	Harl harl;
	std::string level;	
		
	
	level = argv[1];
	harl.complain(level);

	
		
}