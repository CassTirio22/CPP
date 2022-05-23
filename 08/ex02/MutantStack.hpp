/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:54:23 by ctirions          #+#    #+#             */
/*   Updated: 2022/05/23 14:58:47 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T>{
public:
	MutantStack(void) : std::stack<T>() {}
	MutantStack(MutantStack<T> const &src) : std::stack<T>(src){}
	~MutantStack(void) {};
	
	MutantStack	&operator=(MutantStack<T> const &rhs){
		this->c = rhs.c;
		return (*this);
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator r_iterator;

	iterator begin(void);
	iterator end(void);
	r_iterator rbegin(void);
	r_iterator rend(void);
};

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void){
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void){
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::r_iterator	MutantStack<T>::rbegin(void){
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::r_iterator	MutantStack<T>::rend(void){
	return (this->c.rend());
}

#endif
