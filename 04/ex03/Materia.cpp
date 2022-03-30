/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:52:32 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/30 16:41:40 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

AMateria::AMateria(void) : _type("nothing"){}
AMateria::AMateria(std::string const &type) : _type(type){}
AMateria::AMateria(AMateria const &src){
	this->_type = src.getType();
}
AMateria::~AMateria(void){}

AMateria	&AMateria::operator=(AMateria const &rhs){
	this->_type = rhs.getType();
	return (*this);
}

std::string const	&AMateria::getType(void) const{ return (this->_type); }
