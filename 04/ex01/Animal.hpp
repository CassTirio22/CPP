/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:31:51 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/30 15:23:16 by ctirions         ###   ########.fr       */
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
	virtual ~Animal();

	Animal	&operator=(Animal const &rhs);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;

};

# include "Dog.hpp"
# include "Cat.hpp"

#endif