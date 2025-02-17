/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:25:09 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/28 10:30:46 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(const std::string &name) : _name(name)
{}

Zombie::~Zombie(void)
{
    //FOR TEST
    std::cout << "zombie [" << _name << "] destroyed" << std::endl;
    //FOR TEST
}

// FOR TEST
void    Zombie::announce(void)
{
    std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
//FOR TEST