/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 11:00:55 by michismuch        #+#    #+#             */
/*   Updated: 2025/03/01 13:24:01 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_rawbits = 0;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return ;
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

Fixed & Fixed::operator=(Fixed const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_rawbits = other._rawbits;
	return (*this);
}

int Fixed::toInt() const
{
	return (this->_rawbits >> fract);
}

float Fixed::toFloat() const
{
	return (float)this->_rawbits / (1 << fract);
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();

	return (o);
}