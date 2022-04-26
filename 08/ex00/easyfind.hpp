/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:42:51 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/26 15:41:27 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <string>
# include <iostream>
# include <vector>

void	printVal(int &val){
	std::cout << val;
}

void	setVal(int &val){
	static int	i = 0;

	val = i;
	i++;
}

template <typename T>
typename T::iterator	easyfind(T &cont, int const toFind){
	if (cont.begin() == cont.end())
		throw (std::exception());
	typename T::iterator	it = std::find(cont.begin(), cont.end(), toFind);
	if (it == cont.end())
		throw (std::exception());
	return (it);
}

#endif