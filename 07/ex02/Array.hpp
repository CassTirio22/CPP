/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:58:42 by ctirions          #+#    #+#             */
/*   Updated: 2022/05/21 10:50:54 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

template <typename T>
class Array{
private:
	T		*_array;
	size_t	_size;

public:
	Array(void) : _size(0){
		this->_array = new T[0];
	}

	Array(unsigned int n) : _size(n){
		this->_array = new T[n]();
		T	*tmp = new T();
		for (size_t i = 0; i < n; i++)
			this->_array[i] = *tmp;
		delete tmp;
	}

	Array(Array const &src){
		this->_array = new T[src.size()];
		for (size_t i = 0; i < src.size(); i++)
			this->_array[i] = src.getArray()[i];
		this->_size = src.size();
	}

	~Array(void){
		delete [] this->_array;
	}

	Array const	&operator=(Array const &rhs){
		delete [] this->_array;
		this->_array = new T[rhs.size()];
		for (size_t i = 0; i < rhs.size(); i++)
			this->_array[i] = rhs.getArray()[i];
		this->_size = rhs.size();
		return (*this);
	}
	
	T	&operator[](size_t pos){
		if (pos < 0 || pos > this->size())
			throw (std::out_of_range("Invalid index!"));
		return (this->_array[pos]);
	}
	
	T			*getArray(void) const{
		return (this->_array);
	}
	size_t		size(void) const{
		return (this->_size);
	}
};


#endif