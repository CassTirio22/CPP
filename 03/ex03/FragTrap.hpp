/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:12:09 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/24 17:42:41 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap{
public:
	FragTrap(void);
	FragTrap(FragTrap const &src);
	FragTrap(std::string name);
	~FragTrap(void);

	FragTrap	&operator=(FragTrap const &rhs);
	
	void	highFivesGuys(void) const;
	
};

#endif