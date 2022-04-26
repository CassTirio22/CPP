/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:45:05 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/26 17:42:02 by ctirions         ###   ########.fr       */
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
	this->_array = new std::list<int>(src._array->begin(), src._array->end());
}

unsigned int	Span::getSize(void) const{
	return (this->_size);
}

std::list<int>	*Span::getArray(void) const{
	return (this->_array);
}

void	Span::addNumber(int nb){
	if (this->_array->size() == this->_size)
		throw (std::exception());
	this->_array->push_back(nb);
}

void	Span::addNumbers(std::list<int>::iterator begin, std::list<int>::iterator end){
	while (begin != end){
		this->addNumber(*begin);
		begin++;
	}
}

unsigned int		Span::shortestSpan(void) const{
	unsigned int	shortest = UINT64_MAX;
	std::list<int>::iterator it2 = this->_array->begin()++;
	for (std::list<int>::iterator it1 = this->_array->begin(); it1 != this->_array->end()--; it1++){
		if (*it1 > *it2)
	}
}

unsigned int		Span::longestSpan(void) const{
}
