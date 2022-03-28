/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:41:52 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/28 19:52:47 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Brain.hpp"
# include "Animal.hpp"

class Cat : public Animal, public Brain{
private:
	Brain	*_brain;

public:
	Cat(void);
	Cat(Cat const &src);
	~Cat(void);

	Cat		&operator=(Cat const &rhs);
	Brain	&getBrain(void) const;
	
};

#endif