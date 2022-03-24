/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:49:24 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/24 15:54:17 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(){
	std::cout << "ScavTrap default constructor called!" << std::endl;
	this->_hp = 100;
	this->_energy = 50;
	this->_attDmg = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "ScavTrap copy constructor called!" << std::endl;
	this->_hp = 100;
	this->_energy = 50;
	this->_attDmg = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src){
	std::cout << "ScavTrap name parameter constructor called!" << std::endl;
	*this = src;
}
ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap destructor called!" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs){
	this->ClapTrap::operator=(rhs);
	return (*this);
}

void	ScavTrap::attack(std::string &target){
	if (this->_energy <= 0 || this->_hp <= 0)
		return ;
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << " causing, " << this->getAttDmg() << " points of damage!" << std::endl; 
	this->_energy--;
}

void	ScavTrap::guardGate(void){
	if (this->_energy <= 0 || this->_hp <= 0)
		return ;
	std::cout << "ScavTrap " << this->_name << " entered in Gate keeper mode!" << std::endl;
	this->_energy--;
}
