/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:44:02 by lvarela           #+#    #+#             */
/*   Updated: 2024/03/06 21:38:23 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main()
{
	Intern *becario = new Intern();
	
	std::cout << "--------------------------------------------" << std::endl;
		
	AForm *shrubbery = becario->makeForm("Shrubbery Creation", "lol1");

	try
	{
		std::cout << std::endl << "************ ShrubberyCreationForm ************" << std::endl;
		Bureaucrat one("1lol", 1);
		shrubbery->beSigned(one);
        std::cout << std::endl;
		shrubbery->execute(one);
        std::cout << std::endl;
		std::cout << *shrubbery << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "--------------------------------------------" << std::endl;

	AForm *roboto = becario->makeForm("Robotomy Request", "lol2");

	try
	{
		std::cout << std::endl << "************ RobotomyRequestForm ************" << std::endl;
		Bureaucrat two("2lol", 1);
		roboto->beSigned(two);
        std::cout << std::endl;
		roboto->execute(two);
        std::cout << std::endl;
		std::cout << *roboto << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "--------------------------------------------" << std::endl;

	AForm *presi = becario->makeForm("Presidential Pardon", "lol3");

	try
	{
		std::cout << "************ PresidentialPardonForm ************" << std::endl;
		Bureaucrat three("Klol", 1);
		presi->beSigned(three);
		presi->execute(three);
		std::cout << std::endl;
		std::cout << *presi << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "--------------------------------------------" << std::endl;

	try
	{
		std::cout << "************ ExecuteForm ************" << std::endl;
		Bureaucrat four("Klol", 50);
		four.executeForm(*presi);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "--------------------------------------------" << std::endl;

	try
	{
		std::cout << "************ MakeForm ************" << std::endl;
		AForm *wrongPresi = becario->makeForm("Presidential Pardon", "lol3");
		std::cout << std::endl;
		std::cout << *wrongPresi << std::endl;
		delete wrongPresi;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	delete shrubbery;
	delete roboto;
	delete presi;

	return 0;
}
