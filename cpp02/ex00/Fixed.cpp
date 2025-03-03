/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:19:25 by jedusser          #+#    #+#             */
/*   Updated: 2025/03/01 11:14:45 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int main( void ) {
// Fixed a;
// Fixed b( a );
// Fixed c;
// c = b;
// std::cout << a.getRawBits() << std::endl;
// std::cout << b.getRawBits() << std::endl;
// std::cout << c.getRawBits() << std::endl;
// return (0);
// }

Fixed::Fixed()
{
    this->_number = 0;
    std::cout << "Defaut constructor called" << std::endl;

    return;
}
Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this=other;

    return ;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return ;    
}

Fixed & Fixed::operator=(Fixed const &other)
{
    this->_number = other.getRawBits();

    return (*this);
}

void Fixed::setRawBits(int const raw)
{
    this->_number = raw;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_number);
}