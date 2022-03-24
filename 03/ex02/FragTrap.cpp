/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:12:01 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/24 17:24:11 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(){
	std::cout << "FragTrap default constructor called!" << std::endl;
	this->_hp = 100;
	this->_energy = 100;
	this->_attDmg = 30;
}

FragTrap::FragTrap(FragTrap const &src){
	std::cout << "FragTrap copy constructor called!" << std::endl;
	*this = src;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << "FragTrap name parameter constructor called!" << std::endl;
	this->_hp = 100;
	this->_energy = 100;
	this->_attDmg = 30;
}

FragTrap::~FragTrap(void){
	std::cout << "FragTrap destructor called!" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs){
	this->ClapTrap::operator=(rhs);
	return (*this);
}

void	FragTrap::highFivesGuys(void) const{
	std::cout << "Give me a high fives!" << std::endl;
}
