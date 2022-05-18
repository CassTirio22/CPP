/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:42:48 by ctirions          #+#    #+#             */
/*   Updated: 2022/05/18 18:22:37 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void){
	std::cout << std::endl << "---------------------" << std::endl << std::endl;

	std::vector<int>	v1(10);
	for_each(v1.begin(), v1.end(), setVal);
	for_each(v1.begin(), v1.end(), printVal);
	
	std::cout << std::endl << std::endl << "---------------------" << std::endl << std::endl;
	try{
		std::cout << *easyfind(v1, 9) << std::endl;
		std::cout << *easyfind(v1, 2) << std::endl;
		std::cout << *easyfind(v1, 7) << std::endl;
		std::cout << *easyfind(v1, 10) << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl << "---------------------" << std::endl << std::endl;

	std::vector<int>	v2;
	try{
		std::cout << *easyfind(v2, 3) << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}
