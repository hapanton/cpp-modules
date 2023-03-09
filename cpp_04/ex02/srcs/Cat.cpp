/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:44:14 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/28 19:34:17 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Cat.hpp"

Cat::Cat(void) : AAnimal("Cat"){
	std::cout << "\tA cat has appeared!" << std::endl;
    try {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
    }
}

Cat::Cat(Cat& src){
	std::cout << "\tCat copy constructor called" << std::endl;
	*this = src;
}

Cat& Cat::operator=(Cat& src){
	std::cout << "\tCat assignment operator called" << std::endl;
	this->_type = src._type;
	this->_brain = new Brain(*src._brain);
	return (*this);
}

Cat::~Cat(){
	delete this->_brain;
	std::cout << "\tRest in peace to cat :(" << std::endl;
}

void	Cat::makeSound() const{
	std::cout << "\tMeow!" << std::endl;
}
