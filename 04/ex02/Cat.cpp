/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:44:28 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/30 15:19:45 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void) : Animal(){
	std::cout << "A cat is born" << std::endl;
	this->_brain = new Brain;
	this->Animal::type = "Cat";
}

Cat::Cat(Cat const &src){
	this->type = src.getType();
	this->_brain = new Brain;
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(src.getBrain().getIdea(i));
}
Cat::~Cat(void){
	std::cout << "A cat is dead" << std::endl;
	delete this->_brain;
}

Cat	&Cat::operator=(Cat const &rhs){
	this->Animal::type = rhs.Animal::type;
	return (*this);
}

void	Cat::makeSound(void) const{
	std::cout << "Miaou..." << std::endl;
}

Brain	&Cat::getBrain(void) const{ return (*(this->_brain)); }

