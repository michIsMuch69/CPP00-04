/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 07:40:53 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/17 16:37:05 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string _name;
    public:
        void announce(void);
        Zombie(std::string name);
        ~Zombie();
};

// Free functions (not static)
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
