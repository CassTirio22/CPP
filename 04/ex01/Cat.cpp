/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:44:28 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/28 19:53:00 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal(){
	this->_brain = new Brain;
	this->Animal::type = "Cat";
}

Cat::Cat(Cat const &src){ *this = src; }

Cat::~Cat(void){ delete this->_brain; }

Cat	&Cat::operator=(Cat const &rhs){
	this->Animal::type = rhs.Animal::type;
	return (*this);
}

Brain	&Cat::getBrain(void) const{ return (*(this->_brain)); }

