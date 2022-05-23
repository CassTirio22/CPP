/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:15:48 by ctirions          #+#    #+#             */
/*   Updated: 2022/05/21 10:58:26 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*generate(void){
	srand(time(NULL));
	int i = rand() % 3;

	if (!i)
		return (new A);
	else if (i == 1)
		return (new B);
	else
		return (new C);	
}

void	identify(Base *p){
	if (dynamic_cast<A *>(p))
		std::cout << "Class A";
	else if (dynamic_cast<B *>(p))
		std::cout << "Class B";
	else if (dynamic_cast<C *>(p))
		std::cout << "Class C";
	else
		std::cout << "Unknow class";
	std::cout << std::endl;
}

void	identify(Base &p){
	try{
		A	&a = dynamic_cast<A &>(p);
		static_cast<void>(a);
		std::cout << "Class A";
	}
	catch (std::exception &e){
		try{
			B	&b = dynamic_cast<B &>(p);
			static_cast<void>(b);
			std::cout << "Class B";
		}
		catch(std::exception &e){
			try{
				C	&c = dynamic_cast<C &>(p);
				static_cast<void>(c);
				std::cout << "Class C";
			}
			catch (std::exception &e){
				std::cout << "Unknow class";
			}
		}
	}
	std::cout << std::endl;
}

int	main(void){
	Base	*base = generate();

	std::cout << std::endl << "-__Base __-" << std::endl;
	identify(base);
	identify(*base);

	delete base;

	return (0);
}
