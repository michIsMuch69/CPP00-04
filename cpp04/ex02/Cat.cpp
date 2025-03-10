/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:21:38 by michismuch        #+#    #+#             */
/*   Updated: 2025/03/10 16:21:53 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Cat::Cat()
{
    _type = "Cat";
    _brain = new Brain();
    std::cout << "Cat created" << std::endl;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}
