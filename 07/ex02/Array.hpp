/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:58:42 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/25 21:00:42 by ctirions         ###   ########.fr       */
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
	}
	Array(Array const &src){
		this->_array = src.getArray();
		this->_size = src.getSize();
	}
	~Array(void){}

	Array const	&operator=(Array const &rhs){
		this->_array = rhs.getArray();
		this->_size = rhs.getSize();
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