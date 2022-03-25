/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:35:35 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/25 15:26:01 by ctirions         ###   ########.fr       */
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
	if (this->type == "Nothing")
		return ;
	else if (this->type == "Dog")
		std::cout << "Waf waf !!" << std::endl;
	else if (this->type == "Cat")
		std::cout << "Miaou..." << std::endl;
}

std::string	Animal::getType(void) const{ return (this->type); }

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
