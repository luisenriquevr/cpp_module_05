/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 20:17:05 by lvarela           #+#    #+#             */
/*   Updated: 2023/06/04 20:45:35 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : AForm("Unnamed", 72, 45) {
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : AForm("Unnamed", 72, 45), _target(target) {
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &toCopy)
    : AForm("RobotomyRequestForm", 72, 45) {
    *this = toCopy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &toCopy) {
    if (this != &toCopy)
        this->_target = toCopy._target;
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    this->AForm::execute(executor);
    std::cout << "* BRRRR BRRRR *" << std::endl;
    if (rand() % 2)
        std::cout << this->_target << " has been robotomized" << std::endl;
    else
        std::cout << this->_target << " has not been robotomized, process failed" << std::endl;
}


const std::string &RobotomyRequestForm::getTarget() const {
    return this->_target;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

std::ostream &operator<<(std::ostream &COUT, const RobotomyRequestForm &RobotomyRequestForm) {
    COUT << "Name: " << RobotomyRequestForm.getName() << " | Signed: " << RobotomyRequestForm.getSigned()
    << " | SignGrade: " << RobotomyRequestForm.getSignGrade() << " | ExecGrade: " << RobotomyRequestForm.getExecGrade()
    << " | Target: " << RobotomyRequestForm.getTarget() << std::endl;
    return COUT;
}
