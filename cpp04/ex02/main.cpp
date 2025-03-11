/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:22:47 by michismuch        #+#    #+#             */
/*   Updated: 2025/03/11 11:49:11 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    // Animal* generic = new Animal(); // erreur  car Animal est une classe abstraite maintenant

    Animal* dog = new Dog();
    Animal* cat = new Cat();

    std::cout << "\nDog (" << dog->getType() << ") sound: ";
    dog->makeSound();
    
    std::cout << "Cat (" << cat->getType() << ") sound: ";
    cat->makeSound();

    delete dog;
    delete cat;

    return 0;
}
