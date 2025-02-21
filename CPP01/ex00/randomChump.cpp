/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:18:48 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/21 09:04:02 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie zombie(name); // Stack allocation
    zombie.announce();   // It will be destroyed automatically at the end of the function
}
