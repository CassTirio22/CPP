/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:48:40 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/28 20:08:06 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal(){
	this->Animal::type = "Dog";
}

Dog::Dog(Dog const &src){
	*this = src;
}

Dog::~Dog(void){}

Dog	&Dog::operator=(Dog const &rhs){
	this->Animal::type = rhs.Animal::type;
	return (*this);
}

void	Dog::makeSound(void) const{
	std::cout << "Waf waf!" << std::endl;
}
