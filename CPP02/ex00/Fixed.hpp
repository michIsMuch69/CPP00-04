/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:19:28 by jedusser          #+#    #+#             */
/*   Updated: 2025/03/01 11:14:45 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

/*
    - Constructeur par defaut.
    - Constructeur de copie.
    - Operateur d'affectation
    - Destructer
*/

#include <string>
#include <iostream>


class Fixed
{
    private:
        int _number;
        static const int _fract = 8;

        
    public:

    Fixed();
    Fixed(const Fixed&);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed & operator=(const Fixed &);
};



//fir debug
// std::ostream & operator<<(std::ostream &o, Fixed const &i);
//for debug

#endif