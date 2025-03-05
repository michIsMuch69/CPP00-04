/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:19:38 by michismuch        #+#    #+#             */
/*   Updated: 2025/03/05 20:19:46 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat: Copy constructor called" << std::endl;
    *this = other;
}

Cat::~Cat()
{
    std::cout << "Cat: Destructor called" << std::endl;
}

Cat & Cat::operator=(const Cat &other)
{
    std::cout << "Cat: Copy assignment operator called" << std::endl;
    if (this != &other)
        Animal::operator=(other);
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat: Meow! Meow!" << std::endl;
}