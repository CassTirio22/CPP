/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:49:07 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/25 18:09:08 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void){
	int	a = 42;
	int	b = 19;

	std::cout << "-------------------------------------------------------" << std::endl;
	
	std::cout << "max(a, b) = " << max(a, b) << std::endl;
	std::cout << "min(a, b) = " << min(a, b) << std::endl;
	swap(a, b);
	std::cout << "Swap | " << "a = " << a << ", b = " << b << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;

	char	c = 'a';
	char	d = 'z';

	std::cout << "max(c, d) = " << max(c, d) << std::endl;
	std::cout << "min(c, d) = " << min(c, d) << std::endl;
	swap(c, d);
	std::cout << "Swap | " << "c = " << c << ", d = " << d << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;

	std::string e = "Hello";
	std::string f = "Salut";


	std::cout << "max(e, f) = " << ::max(e, f) << std::endl;
	std::cout << "min(e, f) = " << ::min(e, f) << std::endl;
	::swap(e, f);
	std::cout << "Swap | " << "e = " << e << ", f = " << f << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	return (0);
}
