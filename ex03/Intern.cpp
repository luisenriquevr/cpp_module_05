/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:10:53 by lvarela           #+#    #+#             */
/*   Updated: 2024/03/06 21:33:31 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
}

Intern::Intern(const Intern &toCopy) {
	(void)toCopy;
}

Intern &Intern::operator=(const Intern &toCopy) {
	(void)toCopy;
	return *this;
}

AForm *Intern::makeForm(const std::string form, const std::string target) const {
	std::string forms[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
	short int i = 0;
	while (i < 3) {
		if (forms[i] == form)
			break ;
		i++;
	}
	switch (i) {
		case 0:
			std::cout << "Intern creates " << form << std::endl;
			return new ShrubberyCreationForm(target);
		case 1:
			std::cout << "Intern creates " << form << std::endl;
			return new RobotomyRequestForm(target);
		case 2:
			std::cout << "Intern creates " << form << std::endl;
			return new PresidentialPardonForm(target);
		case 3:
			throw AFormException();
	}
	return NULL;
}

Intern::~Intern() {
}
