/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:41:52 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/28 20:18:24 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal{
public:
	Cat(void);
	Cat(Cat const &src);
	~Cat(void);

	Cat		&operator=(Cat const &rhs);
	void	makeSound(void) const;
	
};

class WrongCat : public WrongAnimal{
public:
	WrongCat(void);
	WrongCat(WrongCat const &src);
	~WrongCat(void);

	WrongCat	&operator=(WrongCat const &rhs);
	void		makeSound(void) const;

};

#endif