/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:18:35 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/21 18:47:13 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

int	main(void){
	Zombie* bebra = newZombie("Bebra");
	randomChump("Chump1");
	randomChump("Chump2");
	std::cout << "We can see that heap-allocated zombies are being destroyed once the function returns." << std::endl;
	delete bebra;
}