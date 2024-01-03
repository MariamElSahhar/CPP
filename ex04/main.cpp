/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 21:58:18 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/03 21:58:15 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string replace_line(std::string line, std::string word, std::string newword) {
    std::string newline;
    size_t      pos;

    pos = 0;
    while ((pos = line.find(word)) != std::string::npos) {
        newline.append(line.substr(0, pos));
        newline.append(newword);
        line = line.substr(pos + word.length());        
    }
    newline.append(line);
    if (line.find("\n"))
        newline.append("\n");
    return (newline);
}

void replace(std::string filename, std::string word, std::string newword) {
    std::ifstream ifile(filename);
    
    if (ifile.is_open()) {
        std::ofstream ofile(filename + ".replace");
        if (ofile.is_open()) {
            std::string line;
            while (std::getline(ifile, line))
                ofile << replace_line(line, word, newword);
            ofile.close();
        }
        else 
            std::cout << "Error creating file :(" << std::endl;
        ifile.close();      
    }
    else {
        std::cout << "Error reading file :(" << std::endl;
    }
}

int main(int argv, char** argc) {
    if (argv == 4)
        replace(argc[1], argc[2], argc[3]);
    return 0;
}