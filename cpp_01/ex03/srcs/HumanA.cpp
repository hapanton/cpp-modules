/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:30:04 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/21 21:53:46 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../incs/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {
}

HumanA::~HumanA(){
}

void	HumanA::attack(void) const{
	std::cout << this->_name << " attacks with their "
		<< this->_weapon.getType() << std::endl;
}
