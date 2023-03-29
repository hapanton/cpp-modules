/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:18:35 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/21 20:49:32 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

int	main(void){
	Zombie* bebras = zombieHorde(5, "Bebra");
	for (int i = 0; i < 5; i++){
		bebras->announce();
	}
	bebras->announce();
	delete [] bebras;
}