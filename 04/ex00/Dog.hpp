/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:48:06 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/28 20:11:39 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog :  virtual public Animal{
public:
	Dog(void);
	Dog(Dog const &src);
	~Dog(void);

	Dog		&operator=(Dog const &rhs);
	void	makeSound(void) const;
	
};

#endif