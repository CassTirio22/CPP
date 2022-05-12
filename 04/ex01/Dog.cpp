/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:48:40 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/30 14:56:20 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog(void) : Animal(){
	std::cout << "A Dog is born" << std::endl;
	this->_brain = new Brain;
	this->Animal::type = "Dog";
}

Dog::Dog(Dog const &src){
	this->type = src.getType();
	this->_brain = new Brain;
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(src.getBrain().getIdea(i));
}

Dog::~Dog(void){
	std::cout << "A dog is dead" << std::endl;
	delete this->_brain;
}

Dog	&Dog::operator=(Dog const &rhs){
	this->Animal::type = rhs.Animal::type;
	return (*this);
}

void	Dog::makeSound(void) const{
	std::cout << "Waf waf!" << std::endl;
}

Brain	&Dog::getBrain(void) const{ return (*(this->_brain)); }
