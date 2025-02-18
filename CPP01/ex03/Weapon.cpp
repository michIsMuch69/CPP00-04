/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:02:56 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/18 16:48:49 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>
Weapon::Weapon(/* args */)
{
    return ;
}

Weapon::Weapon(const std::string &type): _type(type)
{
    return ;
}

Weapon::~Weapon()
{
    return ;
}

const std::string Weapon::getType() const
{
    return (this->_type);
}

void Weapon::setType(const std::string &type)
{
    std::cout <<  " type in settype == " << type << std::endl;
    this->_type = type;
}