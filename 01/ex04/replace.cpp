/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:51:24 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/19 17:27:33 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

Replace::Replace(char *argv1, char *argv2, char *argv3) : _filename(argv1), _s1(argv2), _s2(argv3) {}
Replace::~Replace(){}

void	Replace::checkArgs(void){
	if (!std::strncmp(this->_filename, "", 1) || this->_s1 == "" || this->_s2 == ""){
		std::cout << "Args couldn't be empty ..." << std::endl;
		exit (0);
	}
}

std::string	Replace::openFilename(void){
	std::string	text;
	char		c;
	FILE		*fin;

	if (!(fin = std::fopen(this->_filename, "r+"))){
		std::cout << "Use a valid filename ..." << std::endl;
		exit (0);
	}
	while (std::fread(&c, sizeof(char), 1, fin)){
		text.append(1, c);
		if (std::feof(fin))
			std::fclose(fin);
	}
	return (text);
}

void	Replace::makeReplaceFile(void){
	std::string	text;

	text = this->openFilename();
	std::cout << text << std::endl;
}
