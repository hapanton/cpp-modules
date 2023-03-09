/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:58:09 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/28 18:48:06 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/AAnimal.hpp"

AAnimal::AAnimal(void){
	this->_type = "AAnimal";
	std::cout << "A default animal was constructed" << std::endl;
}

AAnimal::AAnimal(std::string type){
	this->_type = type;
	std::cout << "AAnimal of type " << type << " was created!" << std::endl;
}

AAnimal::AAnimal(AAnimal& src){
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = src;
}

AAnimal& AAnimal::operator=(AAnimal& src){
	std::cout << "AAnimal assignment operator called" << std::endl;
	this->_type = src._type;
	return (*this);
}

AAnimal::~AAnimal(){
	std::cout << "AAnimal of type " << this->_type << " was destroyed!" << std::endl;
}

void	AAnimal::makeSound() const{
	std::cout << "* AAnimal makes a sound *" << std::endl;
}

std::string	AAnimal::getType(void) const{
	return this->_type;
}