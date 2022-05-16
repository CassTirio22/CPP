/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:15:48 by ctirions          #+#    #+#             */
/*   Updated: 2022/05/16 16:05:53 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*generate(void){
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
	Base	*base1 = generate();
	Base	*base2 = generate();
	Base	*base3 = generate();
	Base	*base4 = generate();
	Base	*base5 = generate();
	Base	*base6 = generate();
	Base	*base7 = generate();

	std::cout << std::endl << "-__Base 1__-" << std::endl;
	identify(base1);
	identify(*base1);
	std::cout << std::endl << "-__Base 2__-" << std::endl;
	identify(base2);
	identify(*base2);
	std::cout << std::endl << "-__Base 3__-" << std::endl;
	identify(base3);
	identify(*base3);
	std::cout << std::endl << "-__Base 4__-" << std::endl;
	identify(base4);
	identify(*base4);
	std::cout << std::endl << "-__Base 5__-" << std::endl;
	identify(base5);
	identify(*base5);
	std::cout << std::endl << "-__Base 6__-" << std::endl;
	identify(base6);
	identify(*base6);
	std::cout << std::endl << "-__Base 7__-" << std::endl;
	identify(base7);
	identify(*base7);

	delete base1;
	delete base2;
	delete base3;
	delete base4;
	delete base5;
	delete base6;
	delete base7;
	system("leaks identify");
}
