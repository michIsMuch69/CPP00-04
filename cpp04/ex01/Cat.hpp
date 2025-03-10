/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:53:55 by michismuch        #+#    #+#             */
/*   Updated: 2025/03/10 16:00:52 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP


#include "Brain.hpp"
#include "Animal.hpp"

class Cat : public Animal
{
    private:
        Brain* _brain;
    public:
        Cat();
        ~Cat();
        void makeSound() const ;
};

#endif
