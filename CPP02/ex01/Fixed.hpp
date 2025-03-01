/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 11:00:59 by michismuch        #+#    #+#             */
/*   Updated: 2025/03/01 13:22:48 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _rawbits;
        static const int fract = 8;
        /* data */
    public:
        
        Fixed(/* args */);
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed(const Fixed&other);
        ~Fixed();
        
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed & operator=(const Fixed &other);
    };
    
    std::ostream& operator<<(std::ostream &o, Fixed const &i);
    
#endif