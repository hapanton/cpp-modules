/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:54:26 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/21 23:19:31 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Sed.hpp"

Sed::Sed(std::string in){
	this->_inFile = in;
	this->_outFile = in + ".replace";
}

Sed::~Sed(){
}

void	Sed::replace(std::string s1, std::string s2){
	std::ifstream ifs(this->_inFile);
	if (ifs.is_open()){
		std::string buff;
        if (std::getline(ifs, buff, '\0')) {

            std::ofstream	ofs(this->_outFile);
            unsigned long	p = buff.find(s1);

            while (p != std::string::npos) {
                buff.erase(p, s1.length());
                buff.insert(p, s2);
                p = buff.find(s1);
            }
            ofs << buff;
            ofs.close();
        }
        else {
            std::cerr << "Empty file found." << std::endl;
        }
        ifs.close();
    } 
	else {
        std::cerr << "Unable to open the file." << std::endl;
        exit(1);
    }
}

