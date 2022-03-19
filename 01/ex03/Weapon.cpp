/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:19:41 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/18 16:22:04 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}
Weapon::~Weapon(void){}

const std::string   &Weapon::getType(void){
    const std::string   &typeRef = this->type;

    return (typeRef);
}

void    Weapon::setType(std::string type){
    this->type = type;
}
