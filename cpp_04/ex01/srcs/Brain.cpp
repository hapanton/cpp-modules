/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 18:59:29 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/28 19:12:07 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../incs/Brain.hpp"

Brain::Brain(void){
	std::cout << "\t\tA Brain was genetically engineered" << std::endl;
}

Brain::Brain(Brain& src){
	std::cout << "\t\tBrain copy constructor called" << std::endl;
	*this = src;
}

Brain& Brain::operator=(Brain& src){
	std::cout << "\t\tBrain assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++){
		this->_ideas[i] = src._ideas[i];
	}
	return (*this);
}

Brain::~Brain(){
	std::cout << "\t\tBrain was destroyed..." << std::endl;
}