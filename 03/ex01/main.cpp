/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:03:26 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/24 15:53:49 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void){
	std::string	name = "Yugi";
	ScavTrap	defaultScav;
	ScavTrap	yugi("Yugi");
	ScavTrap	byCopy(yugi);

	defaultScav.attack(name);
	yugi.takeDamage(defaultScav.getAttDmg());

	yugi.attack(name = "Kaiba");
	defaultScav.takeDamage(yugi.getAttDmg());

	byCopy.attack(name = "Yugi");
	yugi.takeDamage(byCopy.getAttDmg());

	yugi.beRepaired(4);
	byCopy.beRepaired(10);
	defaultScav.beRepaired(3);
	defaultScav.beRepaired(3);
	defaultScav.beRepaired(3);
	defaultScav.beRepaired(3);
	defaultScav.beRepaired(3);
	defaultScav.beRepaired(3);
	defaultScav.beRepaired(3);
	defaultScav.beRepaired(3);
	defaultScav.beRepaired(3);
	defaultScav.beRepaired(3);
	defaultScav.beRepaired(3);
	defaultScav.beRepaired(3);
	defaultScav.beRepaired(3);
	defaultScav.beRepaired(3);
	defaultScav.beRepaired(3);
	defaultScav.beRepaired(3);
	defaultScav.beRepaired(3);
	defaultScav.beRepaired(3);
	defaultScav.beRepaired(3);
	defaultScav.beRepaired(3);
	defaultScav.beRepaired(3);

	return (0);
}