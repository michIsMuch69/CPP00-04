/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:06:43 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/18 15:26:51 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon _weapon;
        std::string _name; 
        /* data */
    public:
        void    attack() const;
        HumanA(const std::string &name, const Weapon &weapon);
        HumanA(/* args */);
        ~HumanA();
};



#endif