/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:44:12 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/28 19:34:17 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Dog.hpp"

Dog::Dog(void) : AAnimal("Dog"){
	std::cout << "\tA dog was born!" << std::endl;
}

Dog::Dog(Dog& src){
	std::cout << "\tDog copy constructor called" << std::endl;
	*this = src;
}

Dog& Dog::operator=(Dog& src){
	std::cout << "\tDog assignment operator called" << std::endl;
	this->_type = src._type;
	return (*this);
}

Dog::~Dog(){
	std::cout << "\tA dog is no longer with us x_x" << std::endl;
}

void	Dog::makeSound() const{
	std::cout << "\tBark!" << std::endl;
}