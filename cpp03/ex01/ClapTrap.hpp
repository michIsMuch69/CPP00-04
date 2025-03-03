/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:30:57 by michismuch        #+#    #+#             */
/*   Updated: 2025/03/03 19:28:31 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define COLOR_RED     "\033[1;31m"
#define COLOR_GREEN   "\033[1;32m"
#define COLOR_YELLOW  "\033[1;33m"
#define COLOR_BLUE    "\033[1;34m"
#define COLOR_MAGENTA "\033[1;35m"
#define COLOR_CYAN    "\033[1;36m"
#define COLOR_RESET   "\033[0m"

class ClapTrap
{
        private:
            std::string _name;
            int _hitPoints;
            int _energyPoints;
            int _attackDamage;
        
        public:
            ClapTrap(const std::string& name);
            virtual ~ClapTrap();
            
            virtual void attack(const std::string& target);
            void takeDamage(int amount);
            void beRepaired(int amount);
            
            std::string getName () const { return _name ; }

            //getter functions
            int getHitPoints() const { return _hitPoints ; } 
            int  getEnergyPoints() const { return _energyPoints ; }
            int getAttackDamage() const { return _attackDamage ; }
            //setter functions
            void setHitPoints(int nb) { this->_hitPoints = nb ;}
            void setEnergyPoints(int nb) { this->_energyPoints = nb ;}
            void setAttackDamage(int nb) { this->_attackDamage = nb ;}
    };

#endif