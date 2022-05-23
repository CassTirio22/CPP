/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:45:05 by ctirions          #+#    #+#             */
/*   Updated: 2022/05/23 17:44:32 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _size(N){
	this->_array = new std::list<int>;
}
Span::~Span(void){
	delete _array;
}
Span::Span(Span const &src){
	this->_size = src.getSize();
	this->_array = new std::list<int>(src.getArray()->begin(), src.getArray()->end());
}

Span const	&Span::operator=(Span const &rhs){
	this->_size = rhs.getSize();
	delete this->_array;
	this->_array = new std::list<int>(rhs.getArray()->begin(), rhs.getArray()->end());
	return (*this);
}

unsigned int	Span::getSize(void) const{
	return (this->_size);
}

std::list<int>	*Span::getArray(void) const{
	return (this->_array);
}

void	Span::addNumber(int nb){
	if (this->_array->size() == this->_size)
		throw (Span::TooMuchNbr());
	this->_array->push_back(nb);
}

void	Span::addNumbers(std::list<int>::iterator begin, std::list<int>::iterator end){
	while (begin != end){
		this->addNumber(*begin);
		begin++;
	}
}

int		Span::shortestSpan(void) const{
	if (this->_array->size() == 1 || !this->_array->size())
		throw (Span::NotEnoughNbr());
	int	shortest = INT_MAX;
	std::list<int>::iterator it1 = this->_array->begin();
	std::list<int>::iterator it2 = this->_array->begin();
	it2++;
	while (it2 != this->_array->end()){
		if (*it1 > *it2){
			if (*it1 - *it2 < shortest)
				shortest = *it1 - *it2;
		}
		else if (*it2 - *it1 < shortest)
			shortest = *it2 - *it1;
		it1++;
		it2++;
	}
	return (shortest);
}

int		Span::longestSpan(void) const{
	if (this->_array->size() == 1 || !this->_array->size())
		throw (Span::NotEnoughNbr());
	int	longest = -1;
	std::list<int>::iterator it1 = this->_array->begin();
	std::list<int>::iterator it2 = this->_array->begin();
	it2++;
	while (it2 != this->_array->end()){
		if (*it1 > *it2){
			if (*it1 - *it2 > longest)
				longest = *it1 - *it2;
		}
		else if (*it2 - *it1 > longest)
			longest = *it2 - *it1;
		it1++;
		it2++;
	}
	return (longest);
}
