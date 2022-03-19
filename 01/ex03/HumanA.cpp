/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:36:48 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/18 16:17:43 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon), name(name) {}
HumanA::~HumanA(void){}

void    HumanA::attack(void){
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
