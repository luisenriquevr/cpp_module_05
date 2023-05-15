/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 20:03:57 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/11 20:14:17 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

#include "Form.hpp"

class Form;

class Bureaucrat {
   private:
	const std::string _name;
	unsigned short int _grade;

   public:
	Bureaucrat();
	explicit Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &toCopy);
	virtual ~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &toCopy);

	const std::string &getName() const;
	const unsigned short int &getGrade() const;

	void incrementGrade();
	void decrementGrade();
	void signForm(Form &form);

	class GradeTooHighException : public std::exception {
	   public:
		virtual const char *what() const throw() {
			return "Grade too high!";
		}
	};

	class GradeTooLowException : public std::exception {
	   public:
		virtual const char *what() const throw() {
			return "Grade too low!";
		}
	};
};

std::ostream &operator<<(std::ostream &COUT, const Bureaucrat &Bureaucrat);
