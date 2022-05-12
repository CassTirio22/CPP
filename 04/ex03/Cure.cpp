/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:24:40 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/07 15:40:37 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure"){}
Cure::Cure(Cure const &src){
	this->_type = src.getType();
}
Cure::~Cure(void){}

Cure	&Cure::operator=(Cure const &rhs){
	this->_type = rhs.getType();
	return (*this);
}

AMateria	*Cure::clone(void) const{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target){
	std::cout << "* heals "<< target.getName() << "'s wounds *" << std::endl;
}
