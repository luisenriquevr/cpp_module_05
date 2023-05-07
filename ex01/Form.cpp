/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 21:17:59 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/07 22:47:27 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <string>

Form::Form() 
    : _name("unnamed"), _signed(false), _signGrade(150), _execGrade(150) {
}

Form::Form(const std::string name, const unsigned short int signGrade, const unsigned short int execGrade)
    : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade) {
    //TODO: Se puede comprobar si el grado es muy alto o muy bajo y lanzar una excepcion, aunque no debería llegar tal cosa ya que están capados en el constructor del Bureaucrat
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

const unsigned short int Form::getSignGrade() const {
    return this->_signGrade;
}

const unsigned short int Form::getExecGrade() const {
    return this->_execGrade;    
}

void Form::beSigned(Bureaucrat &signer) {
    (signer.getGrade() > this->_signGrade) ? throw(GradeTooLowException().what()) : ((this->_signed) ? throw(SignedException().what(signer, *this)) : void());
    this->_signed = true;
    std::cout << signer.getName() << " signed " << this->getName() << std::endl;
}

std::ostream &operator<<(std::ostream &COUT, const Form &Form) {
    COUT << Form.getName() << " " << Form.getSigned() << " " << Form.getSignGrade()  << " " << Form.getExecGrade() << std::endl;
}
