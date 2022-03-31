/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:37:53 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/31 17:42:42 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CHARACTER_HPP
# define CHARACTER_HPP

# include "Materia.hpp"

class AMateria;

class ICharacter{
public:
	virtual ~ICharacter(void) {}
	virtual std::string const	&getName(void) const = 0;
	virtual void				equip(AMateria *m) = 0;
	virtual void				unequip(int idx) = 0;
	virtual void				use(int idx, ICharacter &target) = 0;

};

class Character : public ICharacter{
private:
	std::string _name;
	AMateria	*_materias[4];

public:
	Character(void);
	Character(std::string name);
	Character(Character const &src);
	~Character(void);

	Character	&operator=(Character const &rhs);
	
	std::string const	&getName(void) const;
	AMateria			*getMateria(int idx) const;
	void				equip(AMateria *m);
	void				unequip(int idx);
	void				use(int idx, ICharacter &target);
};

#endif