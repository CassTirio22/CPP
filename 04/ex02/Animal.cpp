/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:35:35 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/30 14:43:29 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Nothing"){
	std::cout << "An animal is born" << std::endl;
}

Animal::Animal(Animal const &src){
	std::cout << "A copy animal is born" << std::endl;
	*this = src;
}

Animal::~Animal(void){
	std::cout << "An animal is dead" << std::endl;
}

Animal	&Animal::operator=(Animal const &rhs){
	this->type = rhs.type;
	return (*this);
}

void	Animal::makeSound(void) const{
	std::cout << "I'm a basic animal" << std::endl;
}

std::string	Animal::getType(void) const{ return (this->type); }
