/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:02:33 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/28 19:39:56 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain{
protected:
	std::string ideas[100];
	int	_index;

public:
	Brain(void);
	Brain(Brain const &src);
	~Brain(void);

	Brain	&operator=(Brain const &rhs);

	std::string	getIdea(int i) const;
	void		setIdea(std::string idea);

};

#endif