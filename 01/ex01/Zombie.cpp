/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 11:50:37 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/18 12:43:31 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
    std::cout << "A new zombie arrived in the arena !!!" << std::endl;
}

Zombie::~Zombie(void){
    std::cout << this->name << " isn't actualy disposed to eat brainz..." << std::endl;
}

void    Zombie::annouce(void){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string name){
    this->name = name;
}
