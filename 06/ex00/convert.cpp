/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:29:20 by ctirions          #+#    #+#             */
/*   Updated: 2022/05/16 16:01:59 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

Convert::Convert(void) : _str(""){}
Convert::Convert(std::string const str) : _str(str){}
Convert::~Convert(void){}
Convert::Convert(Convert const &src){
	this->_str = src.getStr();
	this->_value = src.getValue();
}

Convert	&Convert::operator=(Convert const &rhs){
	this->_str = rhs.getStr();
	this->_value = rhs.getValue();
	return (*this);
}

std::string	Convert::getStr(void) const{ return (this->_str); }
double		Convert::getValue(void) const{ return (this->_value); }

void		Convert::setValue(int type){
	if (type == 3){
		if (this->_str.length() == 1)
			this->_value = static_cast<float>(this->_str[0]);
		else
			this->_value = static_cast<float>(this->_str[1]);
	}
	else
		this->_value = std::atof(this->_str.c_str());

}

int			Convert::getType(void) const{
	if (this->isInt())
		return (0);
	else if (this->isFloat())
		return (2);
	else if (this->isDouble())
		return (1);
	else if (this->isChar())
		return (3);
	return (4);
}

bool	Convert::isChar(void) const{
	if (this->_str.length() == 1)
		return (true);
	if (this->_str.length() == 3 && this->_str[0] == '\'' && this->_str[2] == '\'')
		return (true);
	return (false);
}

bool	Convert::isInt(void) const{
	size_t	i = -1;
	if (this->_str[0] == '-' || this->_str[0] == '+')
		i++;
	while (++i < this->_str.length())
		if (this->_str[i] < 48 || this->_str[i] > 57)
			return (false);
	return (true);
}

bool	Convert::isDouble(void) const{
	size_t	i = -1;
	size_t	j = 0;
	size_t	k = 0;
	if (this->_str[0] == '-' || this->_str[0] == '+'){
		i++;
		j++;
	}
	while (++i < this->_str.length()){
		if (this->_str[i] >= 48 && this->_str[i] <= 57)
			j++;
		else if (this->_str[i] == '.')
			k++;
	}
	if ((i == j + 1 && k == 1) || this->_str == "-inf" || this->_str == "+inf" || this->_str == "nan" || this->_str == "inf")
		return (true);
	return (false);
}

bool	Convert::isFloat(void) const{
	size_t	i = -1;
	size_t	j = 0;
	size_t	k = 0;
	if (this->_str[0] == '-' || this->_str[0] == '+'){
		i++;
		j++;
	}
	while (++i < this->_str.length() - 1){
		if (this->_str[i] >= 48 && this->_str[i] <= 57)
			j++;
		else if (this->_str[i] == '.')
			k++;
	}
	if ((i == j + 1 && k == 1 && this->_str[i] == 'f') || this->_str == "-inff" || this->_str == "+inff" || this->_str == "nanf" || this->_str == "inff")
		return (true);
	return (false);
}
