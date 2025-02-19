/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 09:17:31 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/19 14:26:10 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

    //  

void replace_line_occurences(const std::string &string, const std::string &to_replace,const std::string &new_string)
{
    std::string final_string;

    (void)new_string;
    (void)to_replace;
    
    size_t first;
    
    std::cout << "string legth = " << string.length() << std::endl;
   
   
    size_t pos = 0;
    for (size_t i = 0; i < string.length(); i++)
    {
        first = string.find(to_replace, pos);
        std::cout << "start of occ found at pos :" << first << std::endl;
        pos++;
    }
    std::cout << "[Final String = " <<  final_string << "]" << std::endl;
}

int	main(int argc, char **argv)
{
    (void)argc;
    if (argc == 1)
        return 1;

    std::string user_entry;
    user_entry = argv[1];
    


    std::ifstream src_file;    
    std::fstream dest_file("original.replace");
    
    std::string src_line;
    
    src_file.open(user_entry.c_str(), std::ifstream::in);
    std::cout << "======IN original.txt======" << std::endl;
    while(std::getline(src_file, src_line))
    {
        std::cout << src_line << std::endl;
        replace_line_occurences(src_line, "loup", "agneau");
        dest_file << src_line << std::endl;        
    }
    src_file.close();
    dest_file.close();

    
    
    
    std::string dest_line;
    dest_file.open("original.replace");
    std::cout << "\n======IN original.replace======" << std::endl;
    while(std::getline(dest_file, dest_line))
    {
        std::cout << dest_line << std::endl;
    }
    dest_file.close();
    


    //ifstream for input
    //ofstream for output
    

    
 
    // std::cout << "Enter string to replace : " << std::endl;
    // std::getline(std::cin, user_entry);
    // std::cout << "string to replace entered : " << user_entry << std::endl;

    // std::cout << "Enter replacement string : " << std::endl;
    // std::getline(std::cin, user_entry);
    // std::cout << "replacement string entered : " << user_entry << std::endl;
    
    // remember use of : std::cin.ignore();

	// Catch the stream, replace occurences, and then write in the file.
    return (0);
}