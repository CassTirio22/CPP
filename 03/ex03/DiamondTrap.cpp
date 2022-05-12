/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:32:15 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/25 14:13:34 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Kaiba_clap_name"){
	std::cout << "DiamondTrap default constructor called!" << std::endl;
	this->_name = "Kaiba";
	this->FragTrap::_hp = 100;
	this->ScavTrap::_energy = 50;
	this->FragTrap::_attDmg = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src){
	std::cout << "DiamondTrap copy constructor called!" << std::endl;
	this->ClapTrap::_name = src._name + "_clap_name";
	*this = src;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"){
	std::cout << "DiamondTrap name parameter constructor called!" << std::endl;
	this->_name = name;
	this->FragTrap::_hp = 100;
	this->ScavTrap::_energy = 50;
	this->FragTrap::_attDmg = 30;
}

DiamondTrap::~DiamondTrap(void){
	std::cout << "DiamondTrap destructor called!" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs){
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy = rhs._energy;
	this->_attDmg = rhs._attDmg;
	return (*this);
}

void	DiamondTrap::whoAmI(void) const{
	std::cout << "My name is " << this->_name << ". My ClapTrap name is " << this->ClapTrap::_name << "." << std::endl;
}
