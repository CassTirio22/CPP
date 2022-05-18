/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:19:21 by ctirions          #+#    #+#             */
/*   Updated: 2022/05/18 16:37:01 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void){
	int			IntArray[] = {1, 2, 3};
	char		CharArray[] = {'a', 'b', 'c'};
	std::string	StrArray[] = {"Hello", "Salut", "Good bye"};

	std::cout << "--------------------------------------------------------" << std::endl;

	iter<int>(IntArray, 3, &print<int>);
	std::cout << "--------------------------------------------------------" << std::endl;
	iter<int>(IntArray, 3, &increment<int>);
	iter<int>(IntArray, 3, &print<int>);
	std::cout << "--------------------------------------------------------" << std::endl;
	iter<int>(IntArray, 3, &decrement<int>);
	iter<int>(IntArray, 3, &print<int>);

	std::cout << "--------------------------------------------------------" << std::endl;

	iter<char>(CharArray, 3, &print<char>);
	std::cout << "--------------------------------------------------------" << std::endl;
	iter<char>(CharArray, 3, &increment<char>);
	iter<char>(CharArray, 3, &print<char>);
	std::cout << "--------------------------------------------------------" << std::endl;
	iter<char>(CharArray, 3, &decrement<char>);
	iter<char>(CharArray, 3, &print<char>);

	std::cout << "--------------------------------------------------------" << std::endl;

	iter<std::string>(StrArray, 3, &print<std::string>);
	std::cout << "--------------------------------------------------------" << std::endl;
	
	return (0);
}