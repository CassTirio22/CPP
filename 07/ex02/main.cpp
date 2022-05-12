/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:19:30 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/25 21:04:09 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void){
	Array<int>			IntArray(4);
	Array<char>			CharArray(6);
	Array<std::string>	StrArray(2);

	std::cout << "--------------------------" << std::endl << std::endl;
	
	try{
		CharArray[10] = 'A';
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "--------------------------" << std::endl << std::endl;
	
	size_t size = IntArray.size();
	for (size_t i = 0; i < size; i++)
		IntArray[i] = 0;
	IntArray[1] = 42;
	for (size_t i = 0; i < size; i++)
		std::cout << "IntArray[" << i << "] : " << IntArray[i] << " | ";
	std::cout << std::endl;

	std::cout << "--------------------------" << std::endl << std::endl;

	size = CharArray.size();
	for (size_t i = 0; i < size; i++)
		CharArray[i] = 'a';
	CharArray[3] = 'A';
	for (size_t i = 0; i < size; i++)
		std::cout << "CharArray[" << i << "] : " << CharArray[i] << " | ";
	std::cout << std::endl;

	std::cout << "--------------------------" << std::endl << std::endl;

	size = StrArray.size();
	for (size_t i = 0; i < size; i++)
		StrArray[i] = "Coucou";
	StrArray[1] = "Hello";
	for (size_t i = 0; i < size; i++)
		std::cout << "StrArray[" << i << "] : " << StrArray[i] << " | ";
	std::cout << std::endl;

	return (0);
}