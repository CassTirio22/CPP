/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:51:24 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/20 17:46:03 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

Replace::Replace(char *argv1, char *argv2, char *argv3) : _filename(argv1), _s1(argv2), _s2(argv3) {}
Replace::~Replace(){}

void	Replace::checkArgs(void){
	if (this->_filename == "" || this->_s1 == "" || this->_s2 == ""){
		std::cout << "Args couldn't be empty ..." << std::endl;
		exit (0);
	}
}

std::string	Replace::openFilename(void){
	char			c;
	std::ifstream	fin(this->_filename);
	
	if (!fin.good())
		exit (0);
	fin.seekg(0, std::ios::end);
	size_t size = fin.tellg();
	fin.seekg(0);
	std::string	text(size, 'a');
	fin.read(&text[0], size);
	return (text);
}

void	Replace::makeReplaceFile(void){
	std::string	text;
	std::string	tmp;
	size_t		pos = 0;

	text = this->openFilename();
	std::ofstream	fout(this->_filename + ".replace");
	while ((pos = text.find(this->_s1, pos)) != std::string::npos){
		tmp = text.substr(0, pos);
		text = tmp + this->_s2 + text.substr(pos + this->_s1.length(), text.length() - 1);
		pos += this->_s2.length();
	}
	fout << text;
	fout.close();
}
