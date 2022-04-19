/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:29:20 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/19 16:24:20 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

Convert::Convert(void) : _str(NULL), _i(0), _f(0), _d(0), _c(0){}
Convert::Convert(std::string const str) : _str(str){}
Convert::Convert(Convert const &src){
	this->_str = src.getStr();
	this->_i = src.getI();
	this->_f = src.getF();
	this->_d = src.getD();
	this->_c = src.getC();
}

Convert	&Convert::operator=(Convert const &rhs){
	this->_str = rhs.getStr();
	this->_i = rhs.getI();
	this->_f = rhs.getF();
	this->_d = rhs.getD();
	this->_c = rhs.getC();
	return (*this);
}

std::string	Convert::getStr(void) const{ return (this->_str); }
int			Convert::getI(void) const{ return (this->_i); }
float		Convert::getF(void) const{ return (this->_f); }
double		Convert::getD(void) const{ return (this->_d); }
char		Convert::getC(void) const{ return (this->_c); }

int			Convert::getType(void) const{
	int	i = -1;
	int	j = 0;
	if (this->_str[0] == '-' || this->_str[0] == '+')
		i++;
	while (++i < this->_str.length())
		if (this->_str[i] >= 48 && this->_str[i] <= 57)
			j++;
	if (i == j)
		return (0);
	i = -1;
	j = 0;
	int	k = 0;
	if (this->_str[0] == '-' || this->_str[0] == '+')
		i++;
	while (++i < this->_str.length()){
		if (this->_str[i] >= 48 && this->_str[i] <= 57)
			j++;
		else if (this->_str[i] == 46)
			k++;
	}
	if ((i == j - 1 && k == 1) || !(this->_str.compare("-inf")) || !(this->_str.compare("+inf")) || !(this->_str.compare("nan")))
		return (1);
	i = -1;
	j = 0;
	k = 0;
	if (this->_str[0] == '-' || this->_str[0] == '+')
		i++;
	while (++i < this->_str.length() - 1){
		if (this->_str[i] >= 48 && this->_str[i] <= 57)
			j++;
		else if (this->_str[i] == 46)
			k++;
	}
	if (i == j - 2 && k == 1 && this->_str[i] == 'f' || !(this->_str.compare("-inff")) || !(this->_str.compare("+inff")) || !(this->_str.compare("nanf")))
		return (2);
	if (this->_str.length() == 1 && this->_str[0] >= 0 && this->_str[0] <= 127)
		return (3);
	return (4);
}
