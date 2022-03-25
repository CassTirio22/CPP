/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:44:28 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/25 15:23:53 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal(){
	this->Animal::type = "Cat";
}

Cat::Cat(Cat const &src){
	*this = src;
}

Cat::~Cat(void){}

Cat	&Cat::operator=(Cat const &rhs){
	this->Animal::type = rhs.Animal::type;
	return (*this);
}

WrongCat::WrongCat(void) : WrongAnimal(){
	this->WrongAnimal::type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &src){
	*this = src;
}

WrongCat::~WrongCat(void){}

WrongCat	&WrongCat::operator=(WrongCat const &rhs){
	this->WrongAnimal::type = rhs.WrongAnimal::type;
	return (*this);
}
