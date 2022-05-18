/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:49:04 by ctirions          #+#    #+#             */
/*   Updated: 2022/05/18 16:40:43 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <string>
# include <iostream>

template <typename T>
T const	&min(T const &a, T const &b){
	if (a >= b)
		return (b);
	return (a);
}

template <typename T>
T const	&max(T const &a, T const &b){
	if (a >= b)
		return (a);
	return (b);
}

template <typename T>
void	swap(T &a, T &b){
	T	tmp = a;
	a = b;
	b = tmp;
}
#endif