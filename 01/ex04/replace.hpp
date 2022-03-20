/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 14:18:21 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/20 17:14:01 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <string>
# include <iostream>
# include <cstring>
# include <fstream>

class Replace
{
private:
	std::string	_s1;
	std::string	_s2;
	std::string	_filename;
	
	std::string	openFilename(void);

public:
	Replace(char *argv1, char *argv2, char *argv3);
	~Replace();

	void		checkArgs(void);
	void		makeReplaceFile(void);
};

#endif