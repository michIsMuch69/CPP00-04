/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:20:43 by michismuch        #+#    #+#             */
/*   Updated: 2025/03/10 16:30:46 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "Animal created (abstract)" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destroyed" << std::endl;
}

std::string Animal::getType() const
{
    return _type;
}
