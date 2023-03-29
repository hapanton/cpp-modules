/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:18:30 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/21 20:45:03 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie{
	private:
		std::string _name;
	public:
		Zombie();
		~Zombie();
		void announce(void) const;
		void setName(std::string);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

Zombie*	zombieHorde(int N, std::string name);

#endif
