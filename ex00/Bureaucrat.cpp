/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 21:45:33 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/06 22:02:47 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("unnamed"), _grade(150) {
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	throw (grade > 150 ? GradeTooLowException().exception() : GradeTooHighException().exception());
}

Bureaucrat::Bureaucrat(const Bureaucrat &toCopy) {
	
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &toCopy) {
	
}

const std::string Bureaucrat::getName() const {

}

const unsigned short int Bureaucrat::getGrade() const {
	
}

void Bureaucrat::incrementGrade() {
	
}

void Bureaucrat::incrementGrade() {
	
}

Bureaucrat::~Bureaucrat() {
	
}