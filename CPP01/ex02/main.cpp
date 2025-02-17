/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:36:57 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/28 11:02:37 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string string;
    std::string *stringPTR;
    std::string &stringREF = string;

    string = "HI THIS IS BRAIN";

    stringPTR = &string;
    
    std::cout << "Address of string variable : " <<  &string << std::endl;
    std::cout << "Address held by stringPTR : " << &stringPTR << std::endl;
    std::cout << "Address held by stringREF : " << &stringREF << std::endl;

    std::cout << std::endl;
    std::cout << "Value of string variable : " << string << std::endl;
    std::cout << "Value pointed to by stringPTR : " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF : " << stringREF << std::endl;
    
}