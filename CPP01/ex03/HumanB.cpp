/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:00:15 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/18 17:18:09 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"




HumanB::HumanB(const std::string &name):_weapon(NULL), _name(name)
{
    return ;
}
HumanB::~HumanB()
{
    return ;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

void HumanB::attack() const
{
    if (this->_weapon)
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    else
        std::cout << this->_name << " has no weapon!" << std::endl;
}
