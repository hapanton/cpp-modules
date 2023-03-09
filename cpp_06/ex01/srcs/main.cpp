/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:29:37 by qsergean          #+#    #+#             */
/*   Updated: 2023/02/04 21:53:10 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Serializer.hpp"

int main (void){
	Data data;

	data.name = "Gosha";
	data.age = 42;
	data.city = "Moscow";

	std::cout << "Name:\t" << Serializer::deserialize( Serializer::serialize( &data ) )->name << std::endl;
    std::cout << "Age:\t" << Serializer::deserialize( Serializer::serialize( &data ) )->age << std::endl;
	std::cout << "City:\t" << Serializer::deserialize( Serializer::serialize( &data ) )->city << std::endl;
}