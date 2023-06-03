/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 21:02:31 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/30 21:07:34 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
   private:
    std::string _target;
    PresidentialPardonForm();

   public:
    PresidentialPardonForm(std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &toCopy);
    virtual ~PresidentialPardonForm();

    PresidentialPardonForm &operator=(const PresidentialPardonForm &toCopy);

    virtual void execute(const Bureaucrat &executor) const;
};
