/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:54:09 by michismuch        #+#    #+#             */
/*   Updated: 2025/03/10 16:30:34 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    std::cout << "Exercice 01 - Animal concret" << std::endl;
    
    Animal* generic = new Animal();
    std::cout << "Generic Animal (" << generic->getType() << ") sound: ";
    generic->makeSound();

    Animal* dog = new Dog();
    Animal* cat = new Cat();

    std::cout << "\nDog (" << dog->getType() << ") sound: ";
    dog->makeSound(); 
    
    std::cout << "Cat (" << cat->getType() << ") sound: ";
    cat->makeSound(); 

    delete generic;
    delete dog;
    delete cat;

    return 0;
}
