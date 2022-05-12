/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:25:05 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/07 15:28:11 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "Materia.hpp"
# include "Character.hpp"

class Cure : public AMateria{
public:
	Cure(void);
	Cure(Cure const &src);
	~Cure(void);

	Cure	&operator=(Cure const &rhs);

	AMateria	*clone(void) const;
	void		use(ICharacter &target);

};

#endif