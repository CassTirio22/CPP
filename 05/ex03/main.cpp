/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:26:10 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/18 15:03:54 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void){
	try{
		Bureaucrat	bill("Bill", 1);
		Bureaucrat	joey("Joey", 150);

		Intern	someRdmIntern;
		Form	*rrf;
		Form	*ppf;
		Form	*scf;
		Form	*test;
		rrf = someRdmIntern.makeForm("RobotomyRequest", "Babo");
		ppf = someRdmIntern.makeForm("PresidentialPardon", "Donald Trump");
		scf = someRdmIntern.makeForm("ShrubberyCreation", "Garden");
		test = someRdmIntern.makeForm("Test", "bender");
		std::cout << "----------------------------------------------------------------------" << std::endl;
		joey.signForm(*rrf);
		joey.signForm(*ppf);
		joey.signForm(*scf);
		std::cout << "----------------------------------------------------------------------" << std::endl;
		bill.signForm(*rrf);
		bill.signForm(*ppf);
		bill.signForm(*scf);
		std::cout << "----------------------------------------------------------------------" << std::endl;
		bill.signForm(*rrf);
		bill.signForm(*ppf);
		bill.signForm(*scf);
		std::cout << "----------------------------------------------------------------------" << std::endl;
		joey.executeForm(*rrf);
		joey.executeForm(*ppf);
		joey.executeForm(*scf);
		std::cout << "----------------------------------------------------------------------" << std::endl;
		bill.executeForm(*rrf);
		bill.executeForm(*rrf);
		bill.executeForm(*rrf);
		bill.executeForm(*rrf);
		bill.executeForm(*rrf);
		bill.executeForm(*rrf);
		bill.executeForm(*rrf);
		bill.executeForm(*rrf);
		std::cout << "----------------------------------------------------------------------" << std::endl;
		bill.executeForm(*ppf);
		std::cout << "----------------------------------------------------------------------" << std::endl;
		bill.executeForm(*scf);

	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}
