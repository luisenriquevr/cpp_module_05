/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:13:41 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/30 20:42:42 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("Unnamed", 145, 137) {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target)
    : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &toCopy)
    : AForm("ShrubberyCreationForm", 145, 137) {
    *this = toCopy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &toCopy) {
    if (this != &toCopy)
        this->_target = toCopy._target;
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    this->AForm::execute(executor);
    std::string const tree[1] =
	{
        "┈╱╲┈┈┈┈┈┈┈┈╱╲┈┈\n"\
        "╱╯╰╲┈┈╱╲┈┈╱╯╰╲┈\n"\
        "╯╯╰╰╲╱╮╰╲╱╯╯╰╰╲\n"\
        "╯╯╰╰╱╰╯╭╮╲╯╯╰╰╰\n"\
        "╯╯╰╱╯╭╮╰╯╭╲╯╰╰╰\n"\
        "▔▋╱╭╮╰╯╭╮╰╯╲▋▔▔\n"\
        "┈╱╮╰╯╭╮╰╯╭╮╰╲┈┈\n"\
        "┈▔▔▔▔▔▔▋▔▔▔▔▔┈┈\n"
	};
    std::ofstream file;
    const std::string file_name = this->_target + "_shrubbery";
    file.open(file_name, std::fstream::out);
    !file.is_open() ? throw(OpenFileException()) : (file << tree[0]);
    file.bad() ? (file.close(), throw(WriteFileException())) : file.close();
}
