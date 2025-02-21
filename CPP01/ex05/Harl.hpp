/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 09:03:47 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/21 13:50:29 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>


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


// enum levels 
// {
//     DEBUG,
//     INFO,
//     WARNING,
//     ERROR
// };

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


#endif