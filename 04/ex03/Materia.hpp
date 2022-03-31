/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:45:45 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/31 17:43:23 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP

# include <string>
# include <iostream>
# include "Character.hpp"

class ICharacter;

class AMateria{
protected:
	std::string	_type;

public:
	AMateria(void);
	AMateria(std::string const &type);
	AMateria(AMateria const &src);
	virtual ~AMateria(void);

	AMateria	&operator=(AMateria const &rhs);

	std::string const	&getType(void) const;
	virtual AMateria	*clone(void) const = 0;
	virtual void		use(ICharacter &target);

};

class IMateriaSource{
public:
	virtual 			~IMateriaSource(void) {}
	virtual void		learnMateria(AMateria *materia) = 0;
	virtual AMateria	*createMateria(std::string const &type) = 0;
};

class MateriaSource : public IMateriaSource{
private:
	AMateria	*_materias[4];

public:
	MateriaSource(void);
	MateriaSource(MateriaSource const &src);
	~MateriaSource(void);

	MateriaSource	&operator=(MateriaSource const &rhs);

	void		learnMateria(AMateria *materia);
	AMateria	*createMateria(std::string const &type);
	AMateria	*getMateria(int idx) const;

};

#endif