/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:54:23 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/27 17:55:23 by ctirions         ###   ########.fr       */
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

	iterator begin(void);
	iterator end(void);
};

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void){
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void){
	return (this->c.end());
}

#endif
