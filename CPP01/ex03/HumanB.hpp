/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:06:08 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/18 15:16:48 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    Weapon _weapon;
    std::string name; 
    /* data */
public:
    void    attack() const;
    HumanB(/* args */);
    ~HumanB();
};



#endif