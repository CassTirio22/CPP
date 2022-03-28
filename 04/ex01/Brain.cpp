/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:07:20 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/28 19:42:14 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain(void) : _index(0) {}
Brain::Brain(Brain const &src){ *this = src; }
Brain::~Brain(void){}

Brain	&Brain::operator=(Brain const &rhs){
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.getIdea(i);
	return (*this);
}

std::string Brain::getIdea(int i) const{ return (this->ideas[i]); }

void	Brain::setIdea(std::string idea){
	this->ideas[_index] = idea;
	this->_index++;
	this->_index %= 100;
}
