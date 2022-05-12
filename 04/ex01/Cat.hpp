/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:41:52 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/30 15:23:34 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Brain.hpp"
# include "Animal.hpp"

class Cat : public Animal{
private:
	Brain	*_brain;

public:
	Cat(void);
	Cat(Cat const &src);
	~Cat(void);

	Cat				&operator=(Cat const &rhs);
	Brain			&getBrain(void) const;
	void	makeSound(void) const;
	
};

#endif