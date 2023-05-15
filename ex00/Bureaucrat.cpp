/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 21:45:33 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/11 19:59:28 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
    : _name("unnamed"), _grade(150) {
}

Bureaucrat::Bureaucrat(const std::string &name, int grade)
    : _name(name), _grade(grade) {
    if (grade > 150 | grade < 1)
        (grade > 150) ? GradeTooLowException().what() : GradeTooHighException().what();
}

Bureaucrat::Bureaucrat(const Bureaucrat &toCopy) {
    *this = toCopy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &toCopy) {
    if (this != &toCopy) {
        this->_name = toCopy._name;
        this->_grade = toCopy._grade;
    }
    return *this;
}

const std::string &Bureaucrat::getName() const {
    return this->_name;
}

const unsigned short int &Bureaucrat::getGrade() const {
    return this->_grade;
}

void Bureaucrat::incrementGrade() {
    ((this->getGrade() - 1) < 1) ? throw(GradeTooHighException()) : this->_grade--;
}

void Bureaucrat::decrementGrade() {
    ((this->getGrade() + 1) > 150) ? throw(GradeTooLowException()) : this->_grade++;
}

Bureaucrat::~Bureaucrat() {
}

std::ostream &operator<<(std::ostream &COUT, const Bureaucrat &Bureaucrat) {
    COUT << "Name: " << Bureaucrat.getName() << " | Grade: " << Bureaucrat.getGrade() << std::endl;
    return COUT;
}
