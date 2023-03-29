/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:36:27 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/21 22:15:15 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../incs/HumanB.hpp"

HumanB::HumanB(std::string name){
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB(){
}

void	HumanB::attack(void) const{
	std::cout << this->_name << " attacks with their "
		<< this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon){
	this->_weapon = &weapon;
}

