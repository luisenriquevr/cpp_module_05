#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat a("mmateo-t", 149);
        std::cout << a << std::endl;
        a.decrementGrade();
        std::cout << a << std::endl;
        a.decrementGrade();
        std::cout << a << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl << std::endl;
    }

    try {
        Bureaucrat b("lvarela", 2);
        std::cout << b << std::endl;
        b.incrementGrade();
        std::cout << b << std::endl;
        b.incrementGrade();
        std::cout << b << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl << std::endl;
    }
}
