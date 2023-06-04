/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 20:17:08 by lvarela           #+#    #+#             */
/*   Updated: 2023/06/04 20:43:40 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class AForm;

class RobotomyRequestForm : public AForm {
   private:
    std::string _target;
    RobotomyRequestForm();

   public:
    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm(const RobotomyRequestForm &toCopy);
    virtual ~RobotomyRequestForm();

    RobotomyRequestForm &operator=(const RobotomyRequestForm &toCopy);

    const std::string &RobotomyRequestForm::getTarget() const;

    virtual void execute(const Bureaucrat &executor) const;
};

std::ostream &operator<<(std::ostream &COUT, const RobotomyRequestForm &RobotomyRequestForm);
