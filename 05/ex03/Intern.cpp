/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:11:52 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/08 19:40:34 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void){}
Intern::Intern(Intern const &src){ (void)src; }
Intern::~Intern(void){}
Intern	&Intern::operator=(Intern const &rhs){
	(void)rhs;
	return (*this);
}

Form	*makeShrubbery(std::string const &target){
	return (new ShrubberyCreationForm(target));
}

Form	*makeRobotomy(std::string const &target){
	return (new RobotomyRequestForm(target));
}

Form	*makePresidential(std::string const &target){
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeForm(std::string const &name, std::string const &target) const{
	std::string	dict_form[3] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};
	Form	*(*dict_formPtr[3])(std::string const &target) = {&makeShrubbery, &makeRobotomy, &makePresidential};
	for (int i = 0; i < 3; i++){
		if (name == dict_form[i])
			return (dict_formPtr[i](target));
	}
	std::cout << "The form " << name << "doesn't exist..." << std::endl;
	return (NULL);
}
