/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:03:26 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/24 14:26:22 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void){
	ClapTrap	defaultClapTrap;
	ClapTrap	yugi("Yugi");
	ClapTrap	byCopy(yugi);

	defaultClapTrap.attack(yugi.getName());
	yugi.takeDamage(defaultClapTrap.getAttDmg());

	yugi.attack(defaultClapTrap.getName());
	defaultClapTrap.takeDamage(yugi.getAttDmg());

	byCopy.attack(yugi.getName());
	yugi.takeDamage(byCopy.getAttDmg());

	yugi.beRepaired(4);
	byCopy.beRepaired(10);
	defaultClapTrap.beRepaired(3);
	defaultClapTrap.beRepaired(3);
	defaultClapTrap.beRepaired(3);
	defaultClapTrap.beRepaired(3);
	defaultClapTrap.beRepaired(3);
	defaultClapTrap.beRepaired(3);
	defaultClapTrap.beRepaired(3);
	defaultClapTrap.beRepaired(3);
	defaultClapTrap.beRepaired(3);
	defaultClapTrap.beRepaired(3);
	defaultClapTrap.beRepaired(3);
	defaultClapTrap.beRepaired(3);
	defaultClapTrap.beRepaired(3);
	defaultClapTrap.beRepaired(3);
	defaultClapTrap.beRepaired(3);
	defaultClapTrap.beRepaired(3);
	defaultClapTrap.beRepaired(3);
	defaultClapTrap.beRepaired(3);
	defaultClapTrap.beRepaired(3);
	defaultClapTrap.beRepaired(3);
	defaultClapTrap.beRepaired(3);

	return (0);
}