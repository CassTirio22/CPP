/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:48:06 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/30 14:37:27 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Brain.hpp"
# include "Animal.hpp"

class Dog : public Animal{
private:
	Brain	*_brain;

public:
	Dog(void);
	Dog(Dog const &src);
	~Dog(void);

	Dog				&operator=(Dog const &rhs);
	Brain			&getBrain(void) const;
	void	makeSound(void) const;
	
};

#endif
