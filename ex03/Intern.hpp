/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 21:22:37 by lvarela           #+#    #+#             */
/*   Updated: 2023/06/13 18:10:50 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class Intern {
   public:
    Intern();
    Intern(const Intern &toCopy);
    virtual ~Intern();

    Intern &operator=(const Intern &toCopy);

    AForm *makeForm(std::string form, std::string target) const;

    class AFormException : public std::exception {
       public:
        virtual const char *what() const throw() {
            return "Intern didn't create the AForm";
        }
    };
};
