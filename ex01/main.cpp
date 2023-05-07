#include "Bureaucrat.hpp"

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	bureaucrat("Godfrey", 70);
		Form		form("Law", 40, 40);

		bureaucrat.signForm(form);
		std::cout << form << std::endl;
		bureaucrat.incrementGrade(60);
		std::cout << bureaucrat << std::endl;
		bureaucrat.signForm(form);
		bureaucrat.signForm(form);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
