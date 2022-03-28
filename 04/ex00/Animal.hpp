/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:31:51 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/28 20:18:20 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALS_HPP
# define ANIMALS_HPP

# include <iostream>
# include <string>

class Animal{
protected:
	std::string type;

public:
	Animal(void);
	Animal(Animal const &src);
	~Animal();

	Animal	&operator=(Animal const &rhs);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;

};

class WrongAnimal{
protected:
	std::string	type;

public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &src);
	~WrongAnimal();

	WrongAnimal	&operator=(WrongAnimal const &rhs);

	void		makeSound(void) const;
	std::string	getType(void) const;

};

# include "Cat.hpp"
# include "Dog.hpp"


#endif