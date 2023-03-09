/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:44:04 by qsergean          #+#    #+#             */
/*   Updated: 2023/02/05 16:51:27 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/whatever.hpp"

// int main (void){
// 	float a = 5.1212;
// 	float b = 4.3232;

// 	std::cout << "a = " << a << std::endl;
// 	std::cout << "b = " << b << std::endl;
// 	std::cout << "min = " << min(a, b) << std::endl;
// 	std::cout << "max = " << max(a, b) << std::endl;

// 	swap(a, b);

// 	std::cout << "a = " << a << std::endl;
// 	std::cout << "b = " << b << std::endl;

// }

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}