/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:44:02 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/15 15:50:26 by lvarela          ###   ########.fr       */
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
		//std::cout << form << std::endl;
		bureaucrat.incrementGrade();
		//std::cout << bureaucrat << std::endl;
		bureaucrat.signForm(form);
		bureaucrat.signForm(form);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
