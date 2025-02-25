/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:50:02 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/25 13:50:26 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <cstddef>

class Zombie
{
    private:
        std::string _name;
    public:
        void announce(void);
        void setName(const std::string &name);
        Zombie(const std::string &name);
        Zombie();
        ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif