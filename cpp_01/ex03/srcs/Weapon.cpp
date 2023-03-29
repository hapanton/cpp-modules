/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:25:07 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/21 21:29:47 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../incs/Weapon.hpp"

Weapon::Weapon(std::string type){
	this->_type = type;	
}

Weapon::~Weapon(){
}

const	std::string&	Weapon::getType(void){
	return this->_type;
}

void	Weapon::setType(std::string newType){
	this->_type = newType;
}