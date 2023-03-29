/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:53:24 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/21 23:01:31 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>

class Sed{
	private:
		std::string	_inFile;
		std::string	_outFile;
	public:
		Sed(std::string);
		~Sed();
		void replace(std::string, std::string);
};

#endif