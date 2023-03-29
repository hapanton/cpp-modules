/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:55:38 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/22 17:28:55 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl{
	private:
		void _debug( void );
		void _info( void );
		void _warning( void );
		void _error( void );
	public:
		Harl();
		~Harl();
		void    complain( std::string level );
};

typedef void (Harl::*t_func) ( void );

#endif