/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-micheldusserre <jean-micheldusserr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 03:56:56 by michismuch        #+#    #+#             */
/*   Updated: 2025/02/10 15:05:13 by jean-michel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

Contact::Contact()
{
    return ;
}

Contact::~Contact()
{ 
    return ;
}

void Contact::displayContactSummary(Contact &contact, int index)
{
        std::string field;
        
        if (contact._getFirstName().empty())
            return ;
        std::cout << COLOR_BLUE; 
        std::cout << "[" << index + 1 << "]";
        
        displayContactField("first Name", &Contact::_getFirstName, TRUNC_ON);
        displayContactField("Last Name", &Contact::_getLastName, TRUNC_ON);
        displayContactField("Nick Name", &Contact::_getNickName, TRUNC_ON);
        std::cout << COLOR_RESET;
}

void Contact::displayContactField(const std::string &field_name, std::string(Contact::*getterFunction)() const, TruncateOption truncate)
{
    std::string field_content;
    
    field_content = (this->*getterFunction)();
    if (truncate  == TRUNC_ON)
    {
        parse_info(field_content);
        std::cout << std::setw(15) << std::right << field_content << "|" ;
    }
    else
        std::cout  << COLOR_YELLOW << field_name << " : "<< COLOR_RESET << field_content << std::endl;
}

void Contact::displayContact(int index)
{
    std::cout << "\n" << COLOR_MAGENTA << "Contact nb [" << index + 1 << "]:" << COLOR_RESET << std::endl;
    
    displayContactField("First name", &Contact::_getFirstName, TRUNC_OFF);
    displayContactField("Last name ", &Contact::_getLastName, TRUNC_OFF);
    displayContactField("Nick name", &Contact::_getNickName, TRUNC_OFF);
    displayContactField("Phone number", &Contact::_getPhoneNumber, TRUNC_OFF);
    displayContactField("Darkest secret", &Contact::_getDarkestSecret, TRUNC_OFF);
}