/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:14:31 by ctirions          #+#    #+#             */
/*   Updated: 2022/05/16 16:01:51 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void	convertAll(Convert &n){
	double	value = n.getValue();
	if (value < 0 || value > 127 || n.getStr() == "nan" || n.getStr() == "nanf")
		std::cout << "CHAR   : impossible" << std::endl;
	else if (std::isprint(value))
		std::cout << "CHAR   : '" << static_cast<char>(value) << "'" << std::endl;
	else
		std::cout << "CHAR   : non displayable" << std::endl;
	if (n.getStr() == "+inf" || n.getStr() == "+inff" || n.getStr() == "inf" || n.getStr() == "inff")
		std::cout << "INT    : " << INT_MAX << std::endl;
	else if (value >= INT_MIN || value <= INT_MAX)
		std::cout << "INT    : " << static_cast<int>(value) << std::endl;
	else
		std::cout << "INT    : impossible" << std::endl;
	if (static_cast<int>(value) == value){
		std::cout << "DOUBLE : " << value << ".0" << std::endl;
		std::cout << "FLOAT  : " << value << ".0f" << std::endl;
	}
	else{
		std::cout << "DOUBLE : " << static_cast<double>(value) << std::endl;
		std::cout << "FLOAT  : " << static_cast<float>(value) << "f" << std::endl;
	}
	
}

int	main(int argc, char **argv){
	if (argc != 2){
		std::cout << "Usage : ./convert <number or char>" << std::endl;
		return (1);
	}
	Convert	n(argv[1]);
	int	type = n.getType();
	if (type == 4){
		std::cout << "Usage : ./convert <number or char>" << std::endl;
		return (1);
	}
	n.setValue(type);
	convertAll(n);
	return (0);
}
