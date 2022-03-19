/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 11:48:03 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/18 12:35:19 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
    Zombie  *zombie1;
    Zombie  *zombie2;
    
    zombie1 = newZombie("Paul");
    zombie1->annouce();
    zombie2 = newZombie("Babo");
    zombie2->annouce();
    randomChump("Frederico");
    delete zombie1;
    delete zombie2;
    return (0);
}
