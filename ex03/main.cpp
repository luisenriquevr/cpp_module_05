/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:44:02 by lvarela           #+#    #+#             */
/*   Updated: 2023/07/25 19:06:22 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{
    srand(time(NULL));
    try
    {
        std::cout << "\n\n-------------------\n\n" << std::endl;
        Bureaucrat a("edu", 40);
        std::cout << a << std::endl;

        ShrubberyCreationForm A("hola");
        std::cout << A << std::endl;

        a.executeForm(A);
        std::cout << std::endl;

        a.signForm(A);
        std::cout << std::endl;

        a.executeForm(A);
        std::cout << "\n\n-------------------\n\n" << std::endl;
    }
    catch( std::exception & e)
    {
        std::cout << e.what();
    }

    try
    {
        Bureaucrat b("Leo", 40);
        std::cout << b << std::endl;

        RobotomyRequestForm B("hola");
        std::cout << B << std::endl;

        b.executeForm(B);
        std::cout << std::endl;

        b.signForm(B);
        std::cout << std::endl;

        b.executeForm(B);
        std::cout << std::endl;

        b.executeForm(B);
        std::cout << "\n\n-------------------\n\n" << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << e.what();
    }

    try
    {
        Bureaucrat c("Pepa", 140);
        std::cout << c << std::endl;

        PresidentialPardonForm C("kakaroto");
        std::cout << C << std::endl;

        c.executeForm(C);
        std::cout << std::endl;
        
        c.signForm(C);
        std::cout << std::endl;

        c.executeForm(C);
        std::cout << "\n\n-------------------\n\n" << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << e.what();
    }
}
