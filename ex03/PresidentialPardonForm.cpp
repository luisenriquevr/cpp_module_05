/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 21:02:33 by lvarela           #+#    #+#             */
/*   Updated: 2023/06/12 21:17:21 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("unnamed", 25, 5) {

}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : AForm("PresidentialPardonForm", 25, 5), _target(target) {
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &toCopy)
    : AForm("PresidentialPardonForm", 145, 137) {
    *this = toCopy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &toCopy) {
    if (this != &toCopy)
        this->_target = toCopy._target;
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    this->AForm::execute(executor);
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

const std::string &PresidentialPardonForm::getTarget() const {
    return this->_target;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

std::ostream &operator<<(std::ostream &COUT, const PresidentialPardonForm &PresidentialPardonForm) {
    COUT << "Name: " << PresidentialPardonForm.getName() << " | Signed: " << PresidentialPardonForm.getSigned()
    << " | SignGrade: " << PresidentialPardonForm.getSignGrade() << " | ExecGrade: " << PresidentialPardonForm.getExecGrade()
    << " | Target: " << PresidentialPardonForm.getTarget() << std::endl;
    return COUT;
}
