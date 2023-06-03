/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 21:02:33 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/30 21:29:26 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("unnamed", 25, 5) {

}

PresidentialPardonForm::PresidentialPardonForm(std::string &target)
    : AForm("PresidentialPardonForm", 25, 5) {
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
