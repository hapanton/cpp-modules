/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:15:19 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/21 21:56:21 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA{
	private:
		std::string _name;
		Weapon&		_weapon;
	public:
		HumanA(std::string, Weapon&);
		~HumanA();
		void	attack(void) const;
};

#endif