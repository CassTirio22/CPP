/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:33:36 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/08 18:56:58 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequest", "Default", 72, 45){}
RobotomyRequestForm::RobotomyRequestForm(std::string const target) : Form("RobotomyRequest", target, 72, 45){}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form("RobotomyRequest", src.getName(), 72, 45){}
RobotomyRequestForm::~RobotomyRequestForm(void){}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs){
	this->_sign = rhs.getSign();
	this->_wGrade = rhs.getWGrade();
	this->_xGrade = rhs.getXGrade();
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if (executor.getGrade() > this->getXGrade())
		throw (Form::GradeTooLowException());
	if (rand() % 2)
		std::cout << this->_target << " was robotomized." << std::endl;
	else
		std::cout << this->_target << " wasn't robotomized." << std::endl;
}
