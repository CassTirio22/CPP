/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:52:32 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/31 18:00:27 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

AMateria::AMateria(void) : _type("nothing"){}
AMateria::AMateria(std::string const &type) : _type(type){}
AMateria::AMateria(AMateria const &src){
	this->_type = src.getType();
}
AMateria::~AMateria(void){}

AMateria	&AMateria::operator=(AMateria const &rhs){
	this->_type = rhs.getType();
	return (*this);
}

std::string const	&AMateria::getType(void) const{ return (this->_type); }

void	AMateria::use(ICharacter &target){
	std::cout << "Default use on " << target.getName() << std::endl;
}

/*___MateriaSource PART___*/

MateriaSource::MateriaSource(void){
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src){
	this->~MateriaSource();
	for (int i = 0; i < 4; i++){
		this->_materias[i] = NULL;
		if (src.getMateria(i))
			this->_materias[i] = src.getMateria(i)->clone();
	}
}

MateriaSource::~MateriaSource(void){
	for (int i = 0; i < 4; i++)
		if (this->_materias[i])
			delete this->_materias[i];
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs){
	this->~MateriaSource();
	for (int i = 0; i < 4; i++){
		this->_materias[i] = NULL;
		if (rhs.getMateria(i))
			this->_materias[i] = rhs.getMateria(i)->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia){
	for (int i = 0; i < 4; i++){
		if (!this->_materias[i]){
			this->_materias[i] = materia;
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type){
	for (int i = 0; i < 4; i++)
		if (this->_materias[i] && this->_materias[i]->getType() == type)
			return (this->_materias[i]->clone());
	return (NULL);
}

AMateria	*MateriaSource::getMateria(int idx) const{ return (this->_materias[idx]); }
