/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:08:20 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/25 13:47:20 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string name;
    Zombie *horde;
    int N;
    
    std::cout << "Entrez un nom :" << std::endl;
    std::cin >> name;
    std::cout << "Entrez le nombre de zombies pour la horde :" << std::endl;
    std::cin >> N;
    
    horde = zombieHorde(N, name);
    if (!horde)
    {
        std::cerr << "Erreur : allocation de la horde de zombies échouée." << std::endl;
        return (1);
    }
    
    for (int i = 0; i < N; i++)
        horde[i].announce();
    
    delete[] horde;
    return (0);
}