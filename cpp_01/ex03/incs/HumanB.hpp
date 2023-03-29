/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:16:04 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/21 22:14:03 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB{
	private:
		std::string _name;
		Weapon*		_weapon;
	public:
		HumanB(std::string);
		~HumanB();
		void	attack(void) const;
		void	setWeapon(Weapon&);
};

#endif