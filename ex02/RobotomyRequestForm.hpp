/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 20:17:08 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/30 20:36:35 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
   private:
    std::string _target;
    RobotomyRequestForm();

   public:
    RobotomyRequestForm(std::string &target);
    RobotomyRequestForm(const RobotomyRequestForm &toCopy);
    virtual ~RobotomyRequestForm();

    RobotomyRequestForm &operator=(const RobotomyRequestForm &toCopy);

    virtual void execute(const Bureaucrat &executor) const;
};
