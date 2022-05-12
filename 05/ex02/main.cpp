/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:26:10 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/25 16:35:50 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void){
	try{
		ShrubberyCreationForm	form1("Garden");
		RobotomyRequestForm		form2("Bob l'éponge");
		PresidentialPardonForm	form3("Donald Trump");
		Bureaucrat	bill("Bill", 1);
		Bureaucrat	joey("Joey", 150);

		std::cout << "----------------------------------------------------------------------" << std::endl;
		bill.executeForm(form1);
		joey.executeForm(form2);
		bill.executeForm(form3);
		std::cout << "----------------------------------------------------------------------" << std::endl;
		joey.signForm(form1);
		joey.signForm(form2);
		joey.signForm(form3);
		std::cout << "----------------------------------------------------------------------" << std::endl;
		bill.signForm(form1);
		bill.signForm(form2);
		bill.signForm(form3);
		std::cout << "----------------------------------------------------------------------" << std::endl;
		joey.executeForm(form1);
		joey.executeForm(form2);
		joey.executeForm(form3);
		std::cout << "----------------------------------------------------------------------" << std::endl;
		bill.executeForm(form1);
		bill.executeForm(form2);
		bill.executeForm(form3);
		std::cout << "----------------------------------------------------------------------" << std::endl;
		bill.executeForm(form2);
		bill.executeForm(form2);
		bill.executeForm(form2);
		bill.executeForm(form2);
		bill.executeForm(form2);
		bill.executeForm(form2);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}
