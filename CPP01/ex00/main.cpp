/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:04:51 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/21 09:03:53 by jedusser         ###   ########.fr       */
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
