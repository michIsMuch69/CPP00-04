/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:19:28 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/25 11:38:07 by jedusser         ###   ########.fr       */
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
        int number;
        static const int rawBits;

        
    public:

        Fixed();
        Fixed(const Fixed&);
        ~Fixed();
};


#endif