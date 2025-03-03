/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 07:07:54 by michismuch        #+#    #+#             */
/*   Updated: 2025/03/03 08:13:30 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <cstdlib>


class Fixed
{
    private:
        int _rawbits;
        static const int fract = 8;
        
    public:
        Fixed();
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed(const Fixed &other);
        ~Fixed();

        Fixed & operator=(const Fixed &other);

        int toInt(void) const;
        float toFloat() const;

        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;

        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;

        Fixed & operator++();
        Fixed operator++(int);
        Fixed & operator--();
        Fixed operator--(int);

        static Fixed & min(Fixed &a, Fixed &b);
        static const Fixed & min(const Fixed &a, const Fixed &b);
        static Fixed & max(Fixed &a, Fixed &b);
        static const Fixed & max(const Fixed &a, const Fixed &b);
};

std::ostream & operator<<(std::ostream &o, const Fixed &fixed);

#endif