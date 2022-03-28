/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:48:40 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/28 19:52:41 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal(){
	this->_brain = new Brain;
	this->Animal::type = "Dog";
}

Dog::Dog(Dog const &src){ *this = src; }

Dog::~Dog(void){ delete this->_brain; }

Dog	&Dog::operator=(Dog const &rhs){
	this->Animal::type = rhs.Animal::type;
	return (*this);
}

Brain	&Dog::getBrain(void) const{ return (*(this->_brain)); }
