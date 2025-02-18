/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:02:56 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/18 15:38:54 by jedusser         ###   ########.fr       */
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
    std::cout << type << std::endl;
    this->_type = type;
}