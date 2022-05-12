/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:26:10 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/07 17:40:18 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void){
	try{
		Bureaucrat	bureaucrat1("Bob", 150);
		Bureaucrat	bureaucrat2("Jim", 1);
		Bureaucrat	bureaucrat3("Corentin", 155);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	Bureaucrat	bureaucrat1("Bill", 1);
	Bureaucrat	bureaucrat2("Joey", 150);
	try{
		bureaucrat1.increaseGrade();
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		bureaucrat2.decreaseGrade();
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}
