/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:21:30 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/19 15:48:18 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>
# include <iostream>

class Convert{
private:
	std::string	_str;
	int			_i;
	float		_f;
	double		_d;
	char		_c;

public:
	Convert(void);
	Convert(std::string const str);
	Convert(Convert const &src);
	~Convert(void);

	Convert	&operator=(Convert const &rhs);	

	std::string	getStr(void) const;
	int			getI(void) const;
	float		getF(void) const;
	double		getD(void) const;
	char		getC(void) const;

	int			getType(void) const;

};

#endif