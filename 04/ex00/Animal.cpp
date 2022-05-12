/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:35:35 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/28 20:04:59 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Nothing"){}

Animal::Animal(Animal const &src){
	*this = src;
}

Animal::~Animal(void){}

Animal	&Animal::operator=(Animal const &rhs){
	this->type = rhs.type;
	return (*this);
}

void	Animal::makeSound(void) const{
	std::cout << "I'm a basic animal" << std::endl;
}

std::string	Animal::getType(void) const{ return (this->type); }


/*   WrongAnimal PART   */

WrongAnimal::WrongAnimal(void) : type("Nothing"){}

WrongAnimal::WrongAnimal(WrongAnimal const &src){
	*this = src;
}

WrongAnimal::~WrongAnimal(void){}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs){
	this->type = rhs.type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const{
	if (this->type == "Nothing")
		return ;
	else if (this->type == "WrongCat")
		std::cout << "Waf waf !!" << std::endl;
}

std::string	WrongAnimal::getType(void) const{ return (this->type); }
