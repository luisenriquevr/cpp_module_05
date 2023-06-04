/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 21:02:31 by lvarela           #+#    #+#             */
/*   Updated: 2023/06/04 20:46:02 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm {
   private:
    std::string _target;
    PresidentialPardonForm();

   public:
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &toCopy);
    virtual ~PresidentialPardonForm();

    PresidentialPardonForm &operator=(const PresidentialPardonForm &toCopy);

    const std::string &PresidentialPardonForm::getTarget() const;

    virtual void execute(const Bureaucrat &executor) const;
};

std::ostream &operator<<(std::ostream &COUT, const PresidentialPardonForm &PresidentialPardonForm);
