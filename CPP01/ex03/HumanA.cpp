/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:14:03 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/18 16:53:52 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(const std::string &name, Weapon &weapon) :  _weapon(weapon),  _name(name)
{
    std::cout << "Init list constructor for HumanA called" << std::endl;
    return ;
}

HumanA::~HumanA()
{
    return ;
}

void HumanA::attack() const
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
    //HOW to pass and print weapont
}
