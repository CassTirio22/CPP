/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:24:11 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/24 14:23:10 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Kaiba"), _hp(10), _energy(10), _attDmg(0){
	std::cout << "Default constructor called!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src){
	std::cout << "Copy constructor called!" << std::endl;
	*this = src;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _energy(10), _attDmg(0){
	std::cout << "Name parameter constructor called!" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called!" << std::endl;
}

std::string	ClapTrap::getName(void) const { return (this->_name); }
int			ClapTrap::getAttDmg(void) const { return (this->_attDmg); }

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs){
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy = rhs._energy;
	this->_attDmg = rhs._attDmg;
	return (*this);
}

void	ClapTrap::attack(const std::string &target){
	if (this->_energy <= 0 || this->_hp <= 0)
		return ;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attDmg << " points of damage!" << std::endl;
	this->_energy--;
}

void	ClapTrap::takeDamage(unsigned int amount){
	this->_hp -= amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->_energy <= 0 || this->_hp <= 0)
		return ;
	this->_hp += amount;
	std::cout << "ClapTrap " << this->_name << " repaired " << amount << " hit point!" << std::endl;
	this->_energy--;
}
