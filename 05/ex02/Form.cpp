/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:17:02 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/25 15:43:51 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Nothing"), _target("Default"), _sign(false), _wGrade(150), _xGrade(150){}
Form::Form(std::string const name, std::string const target, int wGrade, int xGrade) : _name(name), _target(target), _sign(false), _wGrade(wGrade), _xGrade(xGrade){
	if (wGrade < 1)
		throw (Form::GradeTooHighException());
	else if (wGrade > 150)
		throw (Form::GradeTooLowException());
	if (xGrade < 1)
		throw (Form::GradeTooHighException());
	else if (xGrade > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(Form const &src) : _name(src.getName()), _target(src.getTarget()), _sign(src.getSign()), _wGrade(src.getWGrade()), _xGrade(src.getXGrade()) {}
Form::~Form(void){}

Form	&Form::operator=(Form const &rhs){
	this->_sign = rhs.getSign();
	return (*this);
}

std::string const	Form::getName(void) const{ return (this->_name); }
std::string const	Form::getTarget(void) const{ return (this->_target); }
bool				Form::getSign(void) const{ return (this->_sign); }
int					Form::getWGrade(void) const{ return (this->_wGrade); }
int					Form::getXGrade(void) const{ return (this->_xGrade); }

void	Form::beSigned(Bureaucrat const &b){
	if (this->_wGrade < b.getGrade())
		throw (Form::GradeTooLowException());
	this->_sign = true;
}

const char	*Form::GradeTooHighException::what() const throw(){
	return ("Grade too high!");
}

const char	*Form::GradeTooLowException::what() const throw(){
	return ("Grade too low!");
}

std::ostream	&operator<<(std::ostream &o, Form const &rhs){
	o << "Form name : " << rhs.getName() << " | Target : " << rhs.getTarget() << " | Grade to sign : " << rhs.getWGrade() << " | Grade for execute : " << rhs.getXGrade() << " | Is signed : " << rhs.getSign();
	return (o);
}
