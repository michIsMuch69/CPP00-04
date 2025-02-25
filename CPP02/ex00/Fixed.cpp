/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:19:25 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/25 11:43:10 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

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
    std::cout << "Defaut constructor called" << std::endl;
    
}
Fixed::Fixed(const Fixed&)
{
    this->number = 0;
    std::cout << "Copy constructor called" << std::endl;
    
}


Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;

}