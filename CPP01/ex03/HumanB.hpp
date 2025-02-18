/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:06:08 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/18 17:16:17 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    Weapon *_weapon;
    std::string _name; 
    /* data */
public:
    void    attack() const;
    
    void setWeapon(Weapon &weapon);
    HumanB(/* args */);
    HumanB(const std::string &name);
    ~HumanB();
};



#endif