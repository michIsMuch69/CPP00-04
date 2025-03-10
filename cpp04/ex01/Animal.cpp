/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:52:25 by michismuch        #+#    #+#             */
/*   Updated: 2025/03/10 16:17:42 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
    std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(const Animal &other) {
    std::cout << "Animal: Copy constructor called" << std::endl;
    *this = other;
}

Animal::~Animal() {
    std::cout << "Animal: Destructor called" << std::endl;
}

Animal & Animal::operator=(const Animal &other) {
    std::cout << "Animal: Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return *this;
}

std::string Animal::getType() const {
    return this->_type;
}

void Animal::makeSound() const {
    std::cout << "Animal: Generic animal sound" << std::endl;
}
