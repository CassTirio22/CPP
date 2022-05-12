/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:19:21 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/25 18:42:28 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void){
	int			IntArray[] = {1, 19, 42};
	char		CharArray[] = {'a', 'G', 'z'};
	std::string	StrArray[] = {"Hello", "Salut", "Good bye"};

	std::cout << "--------------------------------------------------------" << std::endl;

	iter(IntArray, 3, &print<int>);
	iter(IntArray, 3, &increment<int>);
	iter(IntArray, 3, &print<int>);
	iter(IntArray, 3, &decrement<int>);
	iter(IntArray, 3, &print<int>);

	std::cout << "--------------------------------------------------------" << std::endl;

	iter(CharArray, 3, &print<char>);
	iter(CharArray, 3, &increment<char>);
	iter(CharArray, 3, &print<char>);
	iter(CharArray, 3, &decrement<char>);
	iter(CharArray, 3, &print<char>);

	std::cout << "--------------------------------------------------------" << std::endl;

	iter(StrArray, 3, &print<std::string>);
	std::cout << "--------------------------------------------------------" << std::endl;
	
	return (0);
}