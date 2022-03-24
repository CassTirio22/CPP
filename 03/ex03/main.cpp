/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:03:26 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/24 17:25:26 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void){
	std::string	name = "Yugi";
	FragTrap	defaultFrag;
	FragTrap	yugi("Yugi");
	FragTrap	byCopy(yugi);

	defaultFrag.attack(name);
	yugi.takeDamage(defaultFrag.getAttDmg());

	yugi.attack(name = "Kaiba");
	defaultFrag.takeDamage(yugi.getAttDmg());

	byCopy.attack(name = "Yugi");
	yugi.takeDamage(byCopy.getAttDmg());

	yugi.beRepaired(4);
	byCopy.beRepaired(10);
	defaultFrag.beRepaired(3);
	defaultFrag.beRepaired(3);
	defaultFrag.beRepaired(3);
	defaultFrag.beRepaired(3);
	defaultFrag.beRepaired(3);
	defaultFrag.beRepaired(3);
	defaultFrag.beRepaired(3);
	defaultFrag.beRepaired(3);
	defaultFrag.beRepaired(3);
	defaultFrag.beRepaired(3);
	defaultFrag.beRepaired(3);
	defaultFrag.beRepaired(3);
	defaultFrag.beRepaired(3);
	defaultFrag.beRepaired(3);
	defaultFrag.beRepaired(3);
	defaultFrag.beRepaired(3);
	defaultFrag.beRepaired(3);
	defaultFrag.beRepaired(3);
	defaultFrag.beRepaired(3);
	defaultFrag.beRepaired(3);
	defaultFrag.beRepaired(3);

	return (0);
}