/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:03:26 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/25 14:02:19 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void){
	std::string	name = "Yugi";
	DiamondTrap	defaultFrag;
	DiamondTrap	yugi(name);
	DiamondTrap	byCopy(yugi);

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
	defaultFrag.whoAmI();
	yugi.whoAmI();
	byCopy.whoAmI();

	return (0);
}