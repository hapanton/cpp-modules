/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:24:01 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/21 23:24:07 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Sed.hpp"

int main(int argc, char **argv){
	if (argc != 4){
		return (1);
	}
	Sed	sed(argv[1]);
	sed.replace(argv[2], argv[3]);
	return (0);
}