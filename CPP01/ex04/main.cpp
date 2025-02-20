/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 09:17:31 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/20 10:42:35 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

    //  

void replace_line_occurences(std::string &string, const std::string &to_replace,const std::string &new_string)
{
    (void)new_string;
    size_t start = 0;
    size_t end = 0;

    size_t pos = 0;
    for (size_t i = 0; i <= string.length() &&  start < string.length() && i < string.length() && pos < string.length(); i++)
    {
        std::cout <<  "pos = " << pos << std::endl;
        start = string.find(to_replace, pos);

        end = start + (to_replace.length() - 1);
        if (start == string.npos)
            break;
        string.erase(start, (end - start) + 1);
        string.insert(start, new_string);
        //transformation
        std::cout << "Occurence starting at index : " << start << std::endl; 
        std::cout << "Occurence ending at index : " << end << std::endl; 
        if (end < string.length())
            pos = end + 1;
    }
    std::cout << "string in function ==  " << string << std::endl;
}

int	main(int argc, char **argv)
{
    (void)argc;
    if (argc == 1)
        return 1;

    std::string user_entry;
    user_entry = argv[1];
    


    std::ifstream src_file;    
    std::ofstream dest_file("original.replace");
    std::string src_line;
    
    
    src_file.open(user_entry.c_str(), std::ifstream::in);

    
    std::cout << "======IN original.txt======" << std::endl;
    while(std::getline(src_file, src_line))
    {
        std::cout << "\033[1;34m" << src_line << "\033[0m" << std::endl;
        replace_line_occurences(src_line, "loup", "coso");
        std::cout << "srcline in main " << src_line << std::endl;
        dest_file << src_line << std::endl;        
    }
    src_file.close();
    dest_file.close();

    return (0);
}