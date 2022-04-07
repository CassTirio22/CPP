/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:04:22 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/07 15:28:13 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "Materia.hpp"
# include "Character.hpp"

class Ice : public AMateria{
public:
	Ice(void);
	Ice(Ice const &src);
	~Ice(void);

	Ice	&operator=(Ice const &rhs);

	AMateria	*clone(void) const;
	void		use(ICharacter &target);

};

#endif