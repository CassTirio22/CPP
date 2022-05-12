/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:46:09 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/25 15:45:31 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardon", "Default", 25, 5){}
PresidentialPardonForm::PresidentialPardonForm(std::string const target) : Form("PresidentialPardon", target, 25, 5){}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form("PresidentialPardon", src.getName(), 25, 5){}
PresidentialPardonForm::~PresidentialPardonForm(void){}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs){
	this->_sign = rhs.getSign();
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	if (executor.getGrade() > this->getXGrade())
		throw (Form::GradeTooLowException());
	std::cout << "Zaphod Beeblebrox forgave to " << this->getTarget() << "." << std::endl;
}
