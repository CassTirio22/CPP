/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:48:59 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/25 15:25:36 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main(void){
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();

	std::cout << j->getType() << std::endl;
	j->makeSound();
	std::cout << std::endl << i->getType() << std::endl;
	i->makeSound();
	std::cout << std::endl << meta->getType() << std::endl;
    meta->makeSound();
return 0;
}
