/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:04:02 by qsergean          #+#    #+#             */
/*   Updated: 2023/01/31 23:03:58 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#pragma once
#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
	public:
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &src);
		PresidentialPardonForm &operator=(PresidentialPardonForm &src);
		~PresidentialPardonForm();

		void	execute(const Bureaucrat &executor) const;
		const	std::string	getTarget(void) const;

	private:
		const std::string _target;
};

#endif