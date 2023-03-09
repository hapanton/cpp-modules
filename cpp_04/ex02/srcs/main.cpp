/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:11:48 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/28 19:50:23 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Dog.hpp"
#include "../incs/Cat.hpp"
#include "../incs/WrongCat.hpp"


int main() {
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	// const AAnimal	*lol = new AAnimal(); // this should not compile

	delete j;//should not create a leak
	delete i;
	// delete lol; 

	Dog basic;
	{
		Dog tmp = basic;
	}

	const AAnimal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
	for ( int i = 0; i < 4; i++ ) {
		delete animals[i];
    }
}