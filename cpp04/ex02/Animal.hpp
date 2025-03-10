/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:19:27 by michismuch        #+#    #+#             */
/*   Updated: 2025/03/10 16:31:08 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string _type;
        // constructeur protected pour --> pas d'nstanciation directe de Animal possible
        Animal();
    public:
        virtual ~Animal();
        // fonct pure virtuelle : animal = classe abstraite
        virtual void makeSound() const = 0;
        std::string getType() const;
};

#endif
