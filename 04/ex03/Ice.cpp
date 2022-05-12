/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:16:46 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/31 17:52:36 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice"){}
Ice::Ice(Ice const &src){
	this->_type = src.getType();
}
Ice::~Ice(void){}

Ice	&Ice::operator=(Ice const &rhs){
	this->_type = rhs.getType();
	return (*this);
}

AMateria	*Ice::clone(void) const{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
