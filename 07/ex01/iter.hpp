/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:11:01 by ctirions          #+#    #+#             */
/*   Updated: 2022/05/18 16:34:10 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
void	print(T &a){
	std::cout << a << std::endl;
}

template <typename T>
void	increment(T &a){
	a++;
}

template <typename T>
void	decrement(T &a){
	a--;
}

template <typename T>
void	iter(T *array, size_t size, void (*fct)(T &a)){
	for (size_t i = 0; i < size; i++)
		fct(array[i]);
}

#endif