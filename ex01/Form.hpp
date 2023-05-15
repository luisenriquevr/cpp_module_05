/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 21:18:02 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/15 15:52:06 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
   private:
    const std::string _name;
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
    unsigned short int getSignGrade() const;
    unsigned short int getExecGrade() const;

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
		virtual const char *what() const throw() {
            return "The Form is already signed";
		}
	};
};

std::ostream &operator<<(std::ostream &COUT, const Form &Form);
