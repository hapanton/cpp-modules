/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:03:13 by qsergean          #+#    #+#             */
/*   Updated: 2023/02/05 17:41:12 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/iter.hpp"

template < typename T >
void	print(T &a){
	std::cout << a << " ";
}

// void	printArray(float *array, unsigned int size){
// 	std::cout << "array: ";
// 	for (unsigned int i = 0; i < size; i++){
// 		std::cout << array[i] << " ";
// 	}
// 	std::cout << std::endl;

// }

int	main(void){
	float	a1[6] = {2.43, -34.2, 23.511, 0, -1, 42.21};
	char	a2[6] = {'b','e','b','r','a',')'};
	int		a3[6] = {1,2,3,4,5,6};
	// printArray(array, 6);
	iter(a1, 6, &print);
	iter(a2, 6, &print);
	iter(a3, 6, &print);
}