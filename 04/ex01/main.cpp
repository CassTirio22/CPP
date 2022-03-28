/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:48:59 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/28 19:54:50 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main(void){
	Animal	*Animals[20];


	for(int i = 0; i < 20; i++){
		if (i % 2)
			Animals[i] = new Dog;
		else
			Animals[i] = new Cat;
	}
	for (int i = 0; i < 20; i++){
		if (i % 2){
			for (int j = 0; j < 100; j++)
				((Dog *)Animals[i])->getBrain().setIdea("I want a bone!");
		}
		else{
			for (int j = 0; j < 100; j++)
				((Cat *)Animals[i])->getBrain().setIdea("I want to sleep...");
		}
	}
	std::cout << ((Cat *)Animals[0])->getBrain().getIdea(99) << std::endl;
	std::cout << ((Dog *)Animals[1])->getBrain().getIdea(88) << std::endl;
	for (int i = 0; i < 20; i++)
		delete Animals[i];
	return (0);
}
