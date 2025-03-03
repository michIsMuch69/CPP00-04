/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:04:51 by jedusser          #+#    #+#             */
/*   Updated: 2025/03/03 06:54:04 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    randomChump("   Francis");
    Zombie* heapZombie = newZombie("Francis");
    heapZombie->announce();
    delete heapZombie; 

    return 0;
}

