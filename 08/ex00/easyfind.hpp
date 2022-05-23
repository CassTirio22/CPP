/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:42:51 by ctirions          #+#    #+#             */
/*   Updated: 2022/05/23 13:47:08 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <string>
# include <iostream>
# include <vector>

class IntNotFound : public std::exception{
public:
	virtual const char *what() const throw(){ return ("Int not found."); }
};

void	printVal(int &val){
	std::cout << val;
}

void	setVal(int &val){
	static int	i = 0;

	val = i;
	i++;
}

template <typename T>
typename T::iterator	easyfind(T cont, int const toFind){
	if (cont.begin() == cont.end())
		throw (IntNotFound());
	typename T::iterator	it = std::find(cont.begin(), cont.end(), toFind);
	if (it == cont.end())
		throw (IntNotFound());
	return (it);
}


#endif