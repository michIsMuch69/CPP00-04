/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:50:02 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/28 09:33:50 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
    private:
        std::string _name;
    public:
        void announce(void);
        static Zombie* zombieHorde(int N, std::string name);
        void randomChump(int N, std::string name);
        Zombie(const std::string &name); //init
        Zombie();
        ~Zombie();
};

#endif