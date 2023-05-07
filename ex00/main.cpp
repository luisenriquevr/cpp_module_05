#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat a("rob", 150);
        std::cout << a << std::endl;
        a.decrementGrade();
        std::cout << a << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl << std::endl;
    }

    try {
        Bureaucrat b("edu", 1);
        std::cout << b << std::endl;
        b.incrementGrade();
        std::cout << b << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl << std::endl;
    }
}
