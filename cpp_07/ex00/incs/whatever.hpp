/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:38:57 by qsergean          #+#    #+#             */
/*   Updated: 2023/02/05 16:43:48 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void	swap(T& a, T& b){
	T	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T	min(T& a, T& b){
	return (a < b ? a : b);
}

template<typename T>
T	max(T& a, T& b){
	return (a > b ? a : b);
}

#endif