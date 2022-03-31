/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:34:47 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/31 17:54:46 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"

Character::Character(void) : _name("Nobody"){
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}
Character::Character(std::string name) : _name(name){
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}
Character::Character(Character const &src){
	this->~Character();
	this->_name = src.getName();
	for (int i = 0; i < 4; i++){
		this->_materias[i] = NULL;
		if (src.getMateria(i))
			this->_materias[i] = src.getMateria(i)->clone();
	}
}
Character::~Character(void){
	for (int i = 0; i < 4; i++)
		if (this->_materias[i])
			delete this->_materias[i];
}

Character	&Character::operator=(Character const &rhs){
	this->~Character();
	this->_name = rhs.getName();
	for (int i = 0; i < 4; i++){
		this->_materias[i] = NULL;
		if (rhs.getMateria(i))
			this->_materias[i] = rhs.getMateria(i)->clone();
	}
	return (*this);
}

std::string const	&Character::getName(void) const{ return (this->_name); }
AMateria			*Character::getMateria(int idx) const{ return (this->_materias[idx]); }

void	Character::equip(AMateria *m){
	for (int i = 0; i < 4; i++){
		if (!this->_materias[i]){
			this->_materias[i] = m;
			return ;
		}
	}

}

void	Character::unequip(int idx){
	if (idx < 0 || idx > 3 || !this->_materias[idx])
		return ;
	this->_materias[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target){
	if (idx < 0 || idx > 3 || !this->_materias[idx])
		return ;
	if (this->_materias[idx]->getType() == "ice")
		this->_materias[idx]->use(target);
}
