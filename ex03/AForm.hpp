/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:01:53 by lvarela           #+#    #+#             */
/*   Updated: 2023/06/12 21:20:48 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
   private:
    const std::string _name;
    bool _signed;
    const unsigned short int _signGrade;
    const unsigned short int _execGrade;

   public:
    AForm();
    explicit AForm(const std::string name, const unsigned short int signGrade, const unsigned short int execGrade);
    AForm(const AForm &toCopy);
    virtual ~AForm();

    AForm &operator=(const AForm &toCopy);

    const std::string getName() const;
    bool getSigned() const;
    unsigned short int getSignGrade() const;
    unsigned short int getExecGrade() const;

    void beSigned(Bureaucrat &signer);
	virtual void execute(Bureaucrat const &executor) const = 0;

	class GradeTooHighException : public std::exception {
	   public:
		virtual const char *what() const throw() {
		    return "The form grade was too high!";
		}
	};

	class GradeTooLowException : public std::exception {
	   public:
		virtual const char *what() const throw() {
		    return "The form grade was too low!";
		}
	};

	class SignedException : public std::exception {
	   public:
		virtual const char *what() const throw() {
            return "The form is already signed";
		}
	};

	class NotSignedException : public std::exception {
	   public:
		virtual const char *what() const throw() {
            return "The form is not signed";
		}
	};
};

std::ostream &operator<<(std::ostream &COUT, const AForm &AForm);
