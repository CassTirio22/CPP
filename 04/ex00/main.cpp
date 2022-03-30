/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:48:59 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/30 15:16:01 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main(void){
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();

	std::cout << j->getType() << std::endl;
	j->makeSound();
	std::cout << std::endl << i->getType() << std::endl;
	i->makeSound();
	std::cout << std::endl << k->getType() << std::endl;
    k->makeSound();
	std::cout << std::endl << meta->getType() << std::endl;
    meta->makeSound();

	system("leaks Polymorphism");

	return (0);
}
