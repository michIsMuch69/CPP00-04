/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:06:43 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/18 16:53:47 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon &_weapon;
        std::string _name; 
    public:
        void    attack() const;
        HumanA(const std::string &name, Weapon &weapon);
        HumanA(/* args */);
        ~HumanA();
};



#endif