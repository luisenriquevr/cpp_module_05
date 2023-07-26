/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:44:02 by lvarela           #+#    #+#             */
/*   Updated: 2023/07/26 19:26:09 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main()
{
	Intern *becario = new Intern();
	
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
	catch( const std::exception& e )
	{
		std::cerr << e.what() << '\n';
	}

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

	// AForm *presi = becario->makeForm( "Presidential Pardon", "lol3 " );

	// try
	// {
	// 	std::cout << "************ PresidentialPardonForm ************" << std::endl;
	// 	Bureaucrat  k ( "Klol", 1);
	// 	presi->beSigned( k );
	// 	presi->execute( k );
	// 	std::cout << "\n" << *presi << std::endl;

	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	// try
	// {
	// 	std::cout << "************ ExecuteForm ************" << std::endl;
	// 	Bureaucrat  l ( "Klol", 50);
	// 	l.executeForm( *presi );
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	// try
	// {
	// 	std::cout << "************ MakeForm ************" << std::endl;
	// 	AForm *wrongPresi = becario->makeForm( "Presidential Pardon", "lol3" );
	// 	std::cout << *wrongPresi << std::endl;
	// 	delete wrongPresi;

	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	
	// delete shrubbery;
	// delete roboto;
	// delete presi;

	// return 0;
}








// int main( void )
// {
//     srand(time(NULL));
//     try
//     {
//         std::cout << "\n\n-------------------\n\n" << std::endl;
//         Bureaucrat a("edu", 40);
//         std::cout << a << std::endl;

//         ShrubberyCreationForm A("hola");
//         std::cout << A << std::endl;

//         a.executeForm(A);
//         std::cout << std::endl;

//         a.signForm(A);
//         std::cout << std::endl;

//         a.executeForm(A);
//         std::cout << "\n\n-------------------\n\n" << std::endl;
//     }
//     catch( std::exception & e)
//     {
//         std::cout << e.what();
//     }

//     try
//     {
//         Bureaucrat b("Leo", 40);
//         std::cout << b << std::endl;

//         RobotomyRequestForm B("hola");
//         std::cout << B << std::endl;

//         b.executeForm(B);
//         std::cout << std::endl;

//         b.signForm(B);
//         std::cout << std::endl;

//         b.executeForm(B);
//         std::cout << std::endl;

//         b.executeForm(B);
//         std::cout << "\n\n-------------------\n\n" << std::endl;
//     }
//     catch(std::exception & e)
//     {
//         std::cout << e.what();
//     }

//     try
//     {
//         Bureaucrat c("Pepa", 140);
//         std::cout << c << std::endl;

//         PresidentialPardonForm C("kakaroto");
//         std::cout << C << std::endl;

//         c.executeForm(C);
//         std::cout << std::endl;
        
//         c.signForm(C);
//         std::cout << std::endl;

//         c.executeForm(C);
//         std::cout << "\n\n-------------------\n\n" << std::endl;
//     }
//     catch(std::exception & e)
//     {
//         std::cout << e.what();
//     }
// }
