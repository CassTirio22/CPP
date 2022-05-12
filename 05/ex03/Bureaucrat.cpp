/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:45:35 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/08 18:35:03 by ctirions         ###   ########.fr       */
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

void	Bureaucrat::signForm(Form &f) const{
	if (f.getSign())
		std::cout << this->getName() << " couldn't sign " << f.getName() << " because he is already signed..." << std::endl;
	else{
		try{
			f.beSigned(*this);
			std::cout << this->getName() << " signed " << f.getName() << std::endl;
		}
		catch (std::exception &e){
			std::cout << this->getName() << " couldn't sign " << f.getName() << " because his grade is too low..." << std::endl;
		}
	}
}

void	Bureaucrat::executeForm(Form const &f){
	if (!f.getSign())
		std::cout << this->getName() << " couldn't execute " << f.getName() << " because it wasn't signed." << std::endl;
	else{
		try{
			f.execute(*this);
			std::cout << this->getName() << " executed " << f.getName() << std::endl;
		}
		catch(std::exception &e){
			std::cout << this->getName() << " couldn't execute " << f.getName() << " because his grade is too low." << std::endl;
		}
	}
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
