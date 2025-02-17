/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:18:48 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/17 16:37:28 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie zombie(name); // Stack allocation
    zombie.announce();   // It will be destroyed automatically at the end of the function
}
