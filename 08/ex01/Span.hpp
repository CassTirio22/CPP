/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:43:23 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/26 17:39:38 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <exception>
# include <stdlib.h>
# include <list>
# include <vector>
# include <algorithm>

class Span{
private:
	Span(void);
	std::list<int>	*_array;
	unsigned int	_size;
public:
	Span(unsigned int N);
	Span(Span const &src);
	~Span(void);

	Span const	&operator=(Span const &rhs);

	unsigned int	getSize(void) const;
	std::list<int>	*getArray(void) const;

	void	addNumber(int nb);
	void	addNumbers(std::list<int>::iterator begin, std::list<int>::iterator end);
	unsigned int		shortestSpan(void) const;
	unsigned int		longestSpan(void) const;
};


#endif