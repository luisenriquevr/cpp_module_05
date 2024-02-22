/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:44:02 by lvarela           #+#    #+#             */
/*   Updated: 2024/02/22 20:03:34 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	bureaucrat("Godfrey", 30);
		Form		form("Law", 40, 40);

		bureaucrat.signForm(form);
		std::cout << form;
		bureaucrat.incrementGrade();
		std::cout << bureaucrat;
		bureaucrat.signForm(form);
		form.beSigned(bureaucrat);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
