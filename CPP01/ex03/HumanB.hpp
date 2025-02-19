/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:06:08 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/19 08:46:41 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "Weapon.hpp"

class HumanB
{
private :

    Weapon *_weapon;
    std::string _name; 
public:

    void    attack() const;
    void setWeapon(Weapon &weapon);
    HumanB();
    HumanB(const std::string &name);
    ~HumanB();
};



#endif