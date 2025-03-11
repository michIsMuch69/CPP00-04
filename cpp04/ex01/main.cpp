/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:54:09 by michismuch        #+#    #+#             */
/*   Updated: 2025/03/11 11:49:05 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{    
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
