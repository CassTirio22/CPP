/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:24:14 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/25 14:30:47 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
protected:
	std::string	_name;
	int			_hp;
	int			_energy;
	int			_attDmg;

public:
	ClapTrap();
	ClapTrap(ClapTrap const &src);
	ClapTrap(std::string name);
	~ClapTrap();

	ClapTrap	&operator=(ClapTrap const &rhs);

	std::string	getName(void) const;
	int			getAttDmg(void) const;

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

};



#endif