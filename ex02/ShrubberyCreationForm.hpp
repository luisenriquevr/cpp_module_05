/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:57:38 by lvarela           #+#    #+#             */
/*   Updated: 2023/06/12 21:19:05 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

#include <fstream>

class AForm;

class ShrubberyCreationForm : public AForm {
   private:
    std::string _target;
    ShrubberyCreationForm();

   public:
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &toCopy);
    virtual ~ShrubberyCreationForm();

    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &toCopy);

    const std::string &getTarget() const;

    virtual void execute(const Bureaucrat &executor) const;

    class OpenFileException : public std::exception {
       public:
        virtual const char *what() const throw() {
            return "Error opening the file!";
        }
    };

    class WriteFileException : public std::exception {
       public:
        virtual const char *what() const throw() {
            return "Error writing the file!";
        }
    };
};

std::ostream &operator<<(std::ostream &COUT, const ShrubberyCreationForm &ShrubberyCreationForm);
