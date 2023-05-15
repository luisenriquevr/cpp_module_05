/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 21:17:59 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/15 15:53:23 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <string>

Form::Form() 
    : _name("unnamed"), _signed(false), _signGrade(150), _execGrade(150) {
}

Form::Form(const std::string name, const unsigned short int signGrade, const unsigned short int execGrade)
    : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade) {
    if (signGrade > 150 | signGrade < 1 | execGrade > 150 | execGrade < 1)
        (signGrade > 150 | execGrade > 150) ? throw(GradeTooLowException()) : throw(GradeTooHighException());
}

Form::Form(const Form &toCopy)
    : _name(toCopy._name), _signed(toCopy._signed), _signGrade(toCopy._signGrade), _execGrade(toCopy._execGrade) {
}

Form &Form::operator=(const Form &toCopy) {
    if (this != &toCopy)
        this->_signed = toCopy._signed;
    return *this;
}

const std::string Form::getName() const {
    return this->_name;
}

bool Form::getSigned() const {
    return this->_signed;
}

unsigned short int Form::getSignGrade() const {
    return this->_signGrade;
}

unsigned short int Form::getExecGrade() const {
    return this->_execGrade;    
}

void Form::beSigned(Bureaucrat &signer) {
    (signer.getGrade() > this->_signGrade) ? throw(GradeTooLowException()) : ((this->_signed) ? throw(SignedException()) : this->_signed = true);
    std::cout << signer.getName() << " signed " << this->getName() << std::endl;
}

std::ostream &operator<<(std::ostream &COUT, const Form &Form) {
    COUT << Form.getName() << " " << Form.getSigned() << " " << Form.getSignGrade()  << " " << Form.getExecGrade() << std::endl;
    return COUT;
}

Form::~Form() {
}