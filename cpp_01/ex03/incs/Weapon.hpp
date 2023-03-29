/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:07:43 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/21 21:26:44 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon{
	private:
		std::string _type;
	public:
		Weapon(std::string);
		~Weapon();
		const std::string&	getType(void);
		void				setType(std::string newType);
		
};

#endif