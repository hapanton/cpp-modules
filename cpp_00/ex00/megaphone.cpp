/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 23:18:27 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/21 00:08:32 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < argc)
		{
			int x = 0;
			int len = strlen(argv[i]);
			while (x < len)
			{
				std::cout << (char)toupper(argv[i][x]);
				x++;
			}
			std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}
