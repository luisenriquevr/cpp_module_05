/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:02:28 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/16 19:55:58 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <string>

AForm::AForm() 
    : _name("unnamed"), _signed(false), _signGrade(150), _execGrade(150) {
}

AForm::AForm(const std::string name, const unsigned short int signGrade, const unsigned short int execGrade)
    : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade) {
    if (signGrade > 150 || signGrade < 1 || execGrade > 150 || execGrade < 1)
        (signGrade > 150 || execGrade > 150) ? throw(GradeTooLowException()) : throw(GradeTooHighException());
}

AForm::AForm(const AForm &toCopy)
    : _name(toCopy._name), _signed(toCopy._signed), _signGrade(toCopy._signGrade), _execGrade(toCopy._execGrade) {
}

AForm &AForm::operator=(const AForm &toCopy) {
    if (this != &toCopy)
        this->_signed = toCopy._signed;
    return *this;
}

const std::string AForm::getName() const {
    return this->_name;
}

bool AForm::getSigned() const {
    return this->_signed;
}

unsigned short int AForm::getSignGrade() const {
    return this->_signGrade;
}

unsigned short int AForm::getExecGrade() const {
    return this->_execGrade;    
}

void AForm::beSigned(Bureaucrat &signer) {
    if (signer.getGrade() > this->_signGrade || this->_signed)
        (signer.getGrade() > this->_signGrade) ? throw(GradeTooLowException()) : throw(SignedException());
    this->_signed = true;
    std::cout << signer.getName() << " signed " << this->getName() << std::endl;
}

void AForm::execute(Bureaucrat const &executor) const {
    if (!this->_signed || executor.getGrade() > this->_execGrade)
        !this->_signed ? throw(NotSignedException()) : throw(GradeTooLowException());
    std::cout << "Executed " << this->getName() << std::endl;
}

std::ostream &operator<<(std::ostream &COUT, const AForm &AForm) {
    COUT << AForm.getName() << " " << AForm.getSigned() << " " << AForm.getSignGrade()  << " " << AForm.getExecGrade() << std::endl;
    return COUT;
}

AForm::~AForm() {
}