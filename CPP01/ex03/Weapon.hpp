/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:51:03 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/18 15:38:57 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
#define WEAPON

#include <string>

class Weapon
{
    private:
        std::string _type;
        
    public:
        const std::string getType() const;
        void setType(const std::string &type);

        
        Weapon(const std::string &type);
        Weapon();
        ~Weapon();
};


#endif