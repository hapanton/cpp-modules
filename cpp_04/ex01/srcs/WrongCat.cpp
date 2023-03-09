/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:29:36 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/28 17:29:38 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat"){
	std::cout << "\tA Wrongcat has appeared!" << std::endl;
}

WrongCat::WrongCat(WrongCat& src){
	std::cout << "\tWrongtCat copy constructor called" << std::endl;
	*this = src;
}

WrongCat& WrongCat::operator=(WrongCat& src){
	std::cout << "\tWrongtCat assignment operator called" << std::endl;
	this->_type = src._type;
	return (*this);
}

WrongCat::~WrongCat(){
	std::cout << "\tRest in peace to Wrongcat :(" << std::endl;
}

void	WrongCat::makeSound() const{
	std::cout << "\tWrong Meow!" << std::endl;
}