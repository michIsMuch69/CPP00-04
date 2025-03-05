/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:18:16 by michismuch        #+#    #+#             */
/*   Updated: 2025/03/05 20:18:26 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal: Copy constructor called" << std::endl;
    *this = other;
}

Animal::~Animal()
{
    std::cout << "Animal: Destructor called" << std::endl;
}

Animal & Animal::operator=(const Animal &other)
{
    std::cout << "Animal: Copy assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "Animal: Generic animal sound" << std::endl;
}