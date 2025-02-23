/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 09:03:47 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/23 09:22:34 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

enum levels 
{
	DEBUG,
	INFO,
	WARNING,
	ERROR ,
	UNKNOWN
};



class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void (Harl::*_funcPtr[4])(); 
		
	public:
		
		Harl();
		~Harl();
		void complain(std::string level);
		void* getFuncPtr();
		void setFuncPtr(void *function);
		
};


#endif