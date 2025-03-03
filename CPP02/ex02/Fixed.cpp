/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 07:07:51 by michismuch        #+#    #+#             */
/*   Updated: 2025/03/03 07:14:11 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"
#include <cstdlib>
#include <iostream>

Fixed::Fixed() : _rawbits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called" << std::endl;
    this->_rawbits = nb << fract;
}

Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called" << std::endl;
    this->_rawbits = roundf(nb * (1 << fract));
}

Fixed & Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_rawbits = other._rawbits;
    return *this;
}

int Fixed::toInt(void) const
{
    return (this->_rawbits >> fract);
}

float Fixed::toFloat(void) const
{
    return (static_cast<float>(this->_rawbits) / (1 << fract));
}

bool Fixed::operator>(const Fixed &other) const
{
    return (this->_rawbits > other._rawbits);
}

bool Fixed::operator<(const Fixed &other) const
{
    return (this->_rawbits < other._rawbits);
}

bool Fixed::operator>=(const Fixed &other) const
{
    return (this->_rawbits >= other._rawbits);
}

bool Fixed::operator<=(const Fixed &other) const
{
    return (this->_rawbits <= other._rawbits);
}

bool Fixed::operator==(const Fixed &other) const
{
    return (this->_rawbits == other._rawbits);
}

bool Fixed::operator!=(const Fixed &other) const
{
    return (this->_rawbits != other._rawbits);
}

Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed result;
    result._rawbits = this->_rawbits + other._rawbits;
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed result;
    result._rawbits = this->_rawbits - other._rawbits;
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed result;
    long temp = static_cast<long>(this->_rawbits) * static_cast<long>(other._rawbits);
    result._rawbits = static_cast<int>(temp >> fract);
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed result;
    if (other._rawbits == 0)
    {
        std::cerr << "Error: Division by zero" << std::endl;
        exit(1);
    }
    long temp = (static_cast<long>(this->_rawbits) << fract) / other._rawbits;
    result._rawbits = static_cast<int>(temp);
    return result;
}

// Pre-increment
Fixed & Fixed::operator++()
{
    this->_rawbits++;
    return *this;
}

// Post-increment
Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    this->_rawbits++;
    return temp;
}

// Pre-decrement
Fixed & Fixed::operator--()
{
    this->_rawbits--;
    return *this;
}

// Post-decrement
Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    this->_rawbits--;
    return temp;
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

const Fixed & Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

const Fixed & Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}


std::ostream & operator<<(std::ostream &o, const Fixed &fixed)
{
    o << fixed.toFloat();
    return o;
}


