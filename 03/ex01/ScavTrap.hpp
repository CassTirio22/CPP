/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:43:13 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/24 15:38:39 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(ScavTrap const &src);
	ScavTrap(std::string name);
	~ScavTrap(void);

	ScavTrap	&operator=(ScavTrap const &rhs);

	void	attack(std::string &target);
	void	guardGate(void);
};

#endif