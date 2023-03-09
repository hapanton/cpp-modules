/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:11:49 by qsergean          #+#    #+#             */
/*   Updated: 2023/02/07 18:04:16 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Array.tpp"

int main( void )
{
    Array< float > test;

    Array< int > intArray( 10 );
    Array< int > intArray2( 10 - 5 );

    for ( unsigned int i = 0; i < intArray.size(); i++ )
        intArray[i] = i * 2;

    std::cout << "Integer Array 1:\t" << intArray << std::endl;

    intArray2 = intArray;

    std::cout << "Integer Array 2:\t" << intArray2 << std::endl;

    try {
        std::cout << "Accessing a valid index: " << intArray[5] << std::endl;
        std::cout << "Trying to access an invalid index: " << intArray[10] << std::endl;
    } catch ( Array< int >::OutOfBoundsException& e ) {
        std::cout << "Failed: " << e.what() << std::endl;
    }

}
