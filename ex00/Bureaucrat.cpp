/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 21:45:33 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/06 22:51:17 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("unnamed"), _grade(150) {
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade) {
    (grade > 150 | grade < 1) ? ((grade > 150) ? GradeTooLowException().what() : GradeTooHighException().what()) : NULL;
    //throw ((grade > 150) ? GradeTooLowException().what() : GradeTooHighException().what());
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
    ((this->getGrade() - 1) < 1) ? throw(GradeTooHighException()) : void();
    this->_grade--;
    //((this->_grade - 1) >= 1) ? this->_grade -= 1 : (throw GradeTooHighException().what());
}

void Bureaucrat::decrementGrade() {
    ((this->getGrade() + 1) > 150) ? throw(GradeTooLowException()) : void();
    //((this->_grade + 1) <= 150) ? this->_grade += 1 : (throw GradeTooLowException().what());
}

Bureaucrat::~Bureaucrat() {
}

std::ostream &operator<<(std::ostream &COUT, const Bureaucrat &Bureaucrat) {
    COUT << Bureaucrat.getName() << " " << Bureaucrat.getGrade() << std::endl;
    return COUT;
}
