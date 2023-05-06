/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 20:03:57 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/06 21:49:09 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat {
   private:
	const std::string _name;
	unsigned short int _grade;

   public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &toCopy);
	~Bureaucrat();

	Bureaucrat & operator=(Bureaucrat &toCopy);

	const std::string getName() const;
	const unsigned short int getGrade() const;

	void incrementGrade();
	void decrementGrade();

	class GradeTooHighException : std::exception {
	   public:
		virtual const char *exception() const throw() {
			return "Grade too high!";
		}
	};

	class GradeTooLowException : std::exception {
	   public:
		virtual const char *exception() const throw() {
			return "Grade too low!";
		}
	};
};

std::ostream &operator<<(std::ostream &COUT, const Bureaucrat &Bureaucrat);
