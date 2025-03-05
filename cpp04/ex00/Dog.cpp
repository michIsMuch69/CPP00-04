/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:19:03 by michismuch        #+#    #+#             */
/*   Updated: 2025/03/05 20:19:08 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog: Copy constructor called" << std::endl;
    *this = other;
}

Dog::~Dog()
{
    std::cout << "Dog: Destructor called" << std::endl;
}

Dog & Dog::operator=(const Dog &other)
{
    std::cout << "Dog: Copy assignment operator called" << std::endl;
    if (this != &other)
        Animal::operator=(other);
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog: Woof! Woof!" << std::endl;
}