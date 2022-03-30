/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:45:45 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/30 16:44:46 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP

# include <string>
# include <iostream>

class AMateria{
protected:
	std::string	_type;

public:
	AMateria(void);
	AMateria(std::string const &type);
	AMateria(AMateria const &src);
	~AMateria(void);

	AMateria	&operator=(AMateria const &rhs);

	std::string const	&getType(void) const;
	virtual AMateria	*clone(void) const = 0;
	//virtual void		use(ICharacter &target);

};

class IMateriaSource{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif