/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:04:51 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/17 16:43:03 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    std::string name;
    std::cout << "Enter a name: ";
    std::cin >> name;

    // Stack allocation
    randomChump(name);

    // Heap allocation
    Zombie* heapZombie = newZombie(name);
    heapZombie->announce();
    delete heapZombie; 

    return 0;
}
