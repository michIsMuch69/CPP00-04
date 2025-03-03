/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:31:00 by michismuch        #+#    #+#             */
/*   Updated: 2025/03/03 13:49:13 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    std::cout << COLOR_RED;
    std::cout << "Creating ClapTrap instance Joe" << std::endl;
    ClapTrap ct("Joe");
    std::cout << "-------- ClapTrap Actions --------" << std::endl;

    while (ct.getEnergyPoints() > 0 && ct.getHitPoints() > 0)
    {
        ct.attack("Roger");
        ct.takeDamage(3);
        ct.beRepaired(5);
        
        if (ct.getEnergyPoints() == 0)
        {
            std::cout << ct.getName() << " has no energy points left." << std::endl;
            break;
        }
    }
    std::cout << COLOR_RESET << std::endl;

    std::cout << COLOR_GREEN;
    std::cout << "Creating ScavTrap instance Bob" << std::endl;
    ScavTrap st("Bob");

    std::cout << "-------- ScavTrap Actions --------" << std::endl;
    while (st.getEnergyPoints() > 0 && st.getHitPoints() > 0)
    {
        st.guardGate();
        st.attack("Momo");
        st.takeDamage(3);
        st.beRepaired(5);

        if (st.getEnergyPoints() == 0)
        {
            std::cout << st.getName() << " has no energy points left." << std::endl;
            break;
        }
    }
}
