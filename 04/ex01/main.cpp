/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:48:59 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/30 15:6:16 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main(void){
	Animal	*Animals[6];

	for(int i = 0; i < 6; i++){	// CREATE ALL ANIMALS
		if (i % 2)
			Animals[i] = new Dog;
		else
			Animals[i] = new Cat;
	}
	for (int i = 0; i < 6; i++){	// SET IDEAS FOR ANIMALS
		if (i % 2){
			for (int j = 0; j < 100; j++)
				((Dog *)Animals[i])->getBrain().setIdea("I want a bone!");
		}
		else{
			for (int j = 0; j < 100; j++)
				((Cat *)Animals[i])->getBrain().setIdea("I want to sleep...");
		}
	}

	Cat CatCopy(*(Cat *)Animals[0]);	//	COPY TEST
	std::cout << "--------------------|" << std::endl;
	std::cout << CatCopy.getBrain().getIdea(10) << std::endl;
	std::cout << "--------------------|" << std::endl;

	for (int i = 0; i < 6; i++){	// WRITE IDEAS OF ANIMALS
		if (i % 2)
			std::cout << ((Dog *)Animals[i])->getBrain().getIdea(5 * i) << std::endl;
		else
			std::cout << ((Cat *)Animals[i])->getBrain().getIdea(5 * i) << std::endl;
	}
	for (int i = 0; i < 6; i++)	// FREE ANIMALS
		delete Animals[i];
	return (0);
}
