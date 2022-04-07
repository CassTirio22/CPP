/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:45:35 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/07 17:38:24 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Babo"), _grade(150){}
Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name){
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade = grade;
}
Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src.getName()){
	this->_grade = src.getGrade();
}
Bureaucrat::~Bureaucrat(void){}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs){
	this->_grade = rhs.getGrade();
	return (*this);
}

std::string const	Bureaucrat::getName(void) const{ return (this->_name); }
int					Bureaucrat::getGrade(void) const{ return (this->_grade); }

void	Bureaucrat::increaseGrade(void){
	if (this->_grade == 1)
		throw (Bureaucrat::GradeTooHighException());
	this->_grade--;
}

void	Bureaucrat::decreaseGrade(void){
	if (this->_grade == 150)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade++;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade is too high! Max grade is 1.");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade is too low! Min grade is 150.");
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs){
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (o);
}
