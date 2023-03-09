/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:56:19 by qsergean          #+#    #+#             */
/*   Updated: 2023/02/05 19:25:44 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T* arr, unsigned int len, void (*f)(T &)){
	for (unsigned int i = 0; i < len; i++){
		f(arr[i]);
	} 
	std::cout << std::endl;
}

#endif