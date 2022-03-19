/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 14:18:21 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/19 17:27:09 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <string>
# include <iostream>

class Replace
{
private:
	std::string	_s1;
	std::string	_s2;
	const char	*_filename;
	
	std::string	openFilename(void);

public:
	Replace(char *argv1, char *argv2, char *argv3);
	~Replace();

	void		checkArgs(void);
	void		makeReplaceFile(void);
};

#endif