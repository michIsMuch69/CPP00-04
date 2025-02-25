/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:19:31 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/25 11:38:16 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"
int main( void )
{
    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;
    // std::cout << a.getRawBits() << std::endl;
    // std::cout << b.getRawBits() << std::endl;
    // std::cout << c.getRawBits() << std::endl;
    return (0);
}