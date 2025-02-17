/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:08:20 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/28 10:32:37 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string name;
    Zombie *horde;
    int N;
    
    std::cout << "Enter a name :" << std::endl;
    std::cin >> name;
    std::cout << "Enter nb of zombies for the horde :" << std::endl;
    std::cin >> N;
    horde = Zombie::zombieHorde(N, name);
    delete [] horde;
    return(0);
}
