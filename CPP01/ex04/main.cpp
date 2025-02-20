/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 09:17:31 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/20 13:30:59 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

static void replace_line_occurences(std::string &string, const std::string &to_replace,const std::string &new_string)
{
    size_t start = 0, end = 0, pos = 0;
    
    for (size_t i = 0; i <= string.length() &&  start < string.length() && i < string.length() && pos < string.length(); i++)
    {
        start = string.find(to_replace, pos);
        end = start + (to_replace.length() - 1);
        if (start == string.npos)
            break;
        string.erase(start, (end - start) + 1);
        string.insert(start, new_string);
        if (end < string.length())
            pos = end + 1;
    }
}

static std::string parse_file_name(std::string string)
{
    size_t  pos;
    
    pos = string.find(".");
    if (pos != string.npos)
    {
        string.erase(pos, string.npos);
        string.append(".replace");
        return (string);
    }
    return (string);
}

int	main(int argc, char **argv)
{
    if (argc!= 4)
        return ((std::cerr << "Invalid arguments. Usage : <source file> <occurence to replace> <replacement string>" << std::endl), 1);
    std::string user_entry = argv[1], 
                to_replace = argv[2],  
                new_string = argv[3], 
                extension, src_line;
    const std::string file_name(parse_file_name(user_entry));
    std::ifstream src_file(user_entry.c_str(), std::ifstream::in);  
    if(!src_file)
        return ((std::cerr << "File : <" << user_entry <<  "> does not exists." << std::endl), 1);
    std::ofstream dest_file(file_name.c_str());
    while(std::getline(src_file, src_line))
    {
        if (!src_line.empty())
            replace_line_occurences(src_line, to_replace, new_string);
        dest_file << src_line << std::endl;        
    }
    src_file.close();
    dest_file.close();
    return (0);
}