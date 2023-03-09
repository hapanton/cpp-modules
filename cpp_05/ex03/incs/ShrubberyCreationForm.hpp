/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:03:16 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/31 23:02:03 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#pragma once
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
	public:
		ShrubberyCreationForm( const std::string& target );
		ShrubberyCreationForm( const ShrubberyCreationForm& src );
		ShrubberyCreationForm&  operator=( ShrubberyCreationForm& src );
		~ShrubberyCreationForm();

	    void				execute( const Bureaucrat& executor ) const;
		const std::string	getTarget(void) const;

	private:
		const std::string	_target;
};

#endif