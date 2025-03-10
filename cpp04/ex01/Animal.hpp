/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:52:34 by michismuch        #+#    #+#             */
/*   Updated: 2025/03/10 16:17:27 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
    std::string _type;
public:
    Animal();
    Animal(const Animal &other);
    virtual ~Animal();
    Animal & operator=(const Animal &other);
    std::string getType() const;
    virtual void makeSound() const; // fonction virtuelle -->  implémentation par défaut
};

#endif
