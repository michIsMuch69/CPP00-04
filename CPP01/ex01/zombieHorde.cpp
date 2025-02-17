/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:25:32 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/28 10:33:02 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
    int i;
    Zombie *horde;
    
    horde = new Zombie[N];
    i = 0;
    while (i < N)
    {
        horde[i] =  Zombie(name);
        i++;
    }
//    TEST
    i = 0;
    while(i < N)
    {
        horde[i].announce();
        i++;
    }
  //  TEST
    return (horde);
}