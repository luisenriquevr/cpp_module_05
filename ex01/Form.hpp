/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 21:18:02 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/07 22:53:47 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
   private:
    std::string _name;
    bool _signed;
    const unsigned short int _signGrade;
    const unsigned short int _execGrade;

   public:
    Form();
    explicit Form(const std::string name, const unsigned short int signGrade, const unsigned short int execGrade);
    Form(const Form &toCopy);
    virtual ~Form();

    Form &operator=(const Form &toCopy);

    const std::string getName() const;
    bool getSigned() const;
    const unsigned short int getSignGrade() const;
    const unsigned short int getExecGrade() const;

    void beSigned(Bureaucrat &signer);

	class GradeTooHighException : public std::exception {
	   public:
		virtual const char *what() const throw() {
		    return "The Form grade was too high!";
		}
	};

	class GradeTooLowException : public std::exception {
	   public:
		virtual const char *what() const throw() {
		    return "The Form grade was too low!";
		}
	};

	class SignedException : public std::exception {
	   public:
		virtual const char *what(Bureaucrat &signer, Form &form) const throw() {
		    std::string error = (signer.getName() + " couldn’t sign " + form.getName() + " because is signed.");
            return error.c_str();
		}
	};
};

std::ostream &operator<<(std::ostream &COUT, const Form &Form);
