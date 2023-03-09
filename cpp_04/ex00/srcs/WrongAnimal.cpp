/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:29:07 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/28 17:29:09 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void){
	this->_type = "WrongAnimal";
	std::cout << "A default WrongAnimal was constructed" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type){
	this->_type = type;
	std::cout << "WrongAnimal of type " << type << " was created!" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& src){
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& src){
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	this->_type = src._type;
	return (*this);
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal of type " << this->_type << " was destroyed!" << std::endl;
}

void	WrongAnimal::makeSound() const{
	std::cout << "* WrongAnimal makes a sound *" << std::endl;
}

std::string	WrongAnimal::getType(void) const{
	return(this->_type);
}