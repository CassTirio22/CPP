/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:15:38 by ctirions          #+#    #+#             */
/*   Updated: 2022/05/21 11:44:50 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void){
	{
		Span sp = Span(50000);
	
		std::list<int> lst(49999, 19);
		lst.push_front(42);
		sp.addNumbers(lst.begin(), lst.end());
		std::cout << "Shortest : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest  : " << sp.longestSpan() << std::endl;
	}
	std::cout << "----------------------------------" << std::endl;
	{
		Span sp = Span(50);
		int arr[] = { -10, 0, 10 };
		int n = sizeof(arr) / sizeof(arr[0]);
	
		std::list<int> lst(arr, arr + n);
		sp.addNumbers(lst.begin(), lst.end());
		std::cout << "Shortest : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest  : " << sp.longestSpan() << std::endl;
	}
	std::cout << "----------------------------------" << std::endl;
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest  : " << sp.longestSpan() << std::endl;
	}
	std::cout << "----------------------------------" << std::endl;
	{
		Span sp = Span(6);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		Span sp_copy = Span(sp);
		std::cout << "Shortest : " << sp_copy.shortestSpan() << std::endl;
		std::cout << "Longest  : " << sp_copy.longestSpan() << std::endl;

		std::cout << "----------------------------------" << std::endl;
		
		Span sp_asign = Span(sp);
		sp.addNumber(1000);
		std::cout << "Shortest : " << sp_asign.shortestSpan() << std::endl;
		std::cout << "Longest  : " << sp_asign.longestSpan() << std::endl;
		std::cout << "Longest  : " << sp.longestSpan() << std::endl;
	}
	std::cout << "----------------------------------" << std::endl;
	{
		try
		{
			Span sp = Span(3);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			Span sp = Span(3);
			int arr[] = { 0, 10, -10, 42, 19 };
			int n = sizeof(arr) / sizeof(arr[0]);

			std::list<int> lst(arr, arr + n);
			sp.addNumbers(lst.begin(), lst.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		
	}
	return (0);
}