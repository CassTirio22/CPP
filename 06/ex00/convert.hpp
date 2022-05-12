/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:21:30 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/20 15:39:33 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <limits.h>

class Convert{
private:
	float		_value;
	std::string	_str;

public:
	Convert(void);
	Convert(std::string const str);
	Convert(Convert const &src);
	~Convert(void);

	Convert	&operator=(Convert const &rhs);	

	std::string	getStr(void) const;
	float		getValue(void) const;
	void		setValue(void);

	int			getType(void) const;
	bool		isChar(void) const;
	bool		isInt(void) const;
	bool		isDouble(void) const;
	bool		isFloat(void) const;

};

#endif