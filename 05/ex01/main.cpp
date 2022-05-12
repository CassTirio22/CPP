/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:26:10 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/25 15:31:55 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void){
	try{
		Form	form("form", 155, -1);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try{
		Form	form("form", 1, 1);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	Form	form1("form1", 150, 150);
	Form	form2("form2", 1, 1);
	Form	form3("form3", 150, 1);
	Bureaucrat	bill("Bill", 1);
	Bureaucrat	joey("Joey", 150);

	joey.signForm(form1);
	bill.signForm(form1);
	joey.signForm(form2);
	bill.signForm(form2);
	bill.signForm(form3);
	joey.signForm(form3);
	return (0);
}
