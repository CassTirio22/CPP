/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:32:17 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/25 13:40:19 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
private:
	std::string	_name;

public:
	DiamondTrap(void);	
	DiamondTrap(DiamondTrap const &src);	
	DiamondTrap(std::string name);
	~DiamondTrap(void);

	DiamondTrap	&operator=(DiamondTrap const &rhs);

	void	whoAmI(void) const;

};

#endif