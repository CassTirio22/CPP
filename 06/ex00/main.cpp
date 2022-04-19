/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:14:31 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/19 18:41:16 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void	conv_from_int(Convert const &n){
	int	nb = std::stoi(n.getStr());

	try{
		std::cout << "CHAR   : " << static_cast<char>(nb) << std::endl;
	}
	catch (std::exception &e){
		std::cout << "CHAR	 : " << e.what() << std::endl;
	}
	std::cout << "INT    : " << nb << std::endl;
	try{
		std::cout << "FLOAT  : " << static_cast<float>(nb) << std::endl;
	}
	catch (std::exception &e){
		std::cout << "FLOAT  : " << e.what() << std::endl;
	}
	try{
		std::cout << "DOUBLE : " << static_cast<double>(nb) << std::endl;
	}
	catch (std::exception &e){
		std::cout << "DOUBLE : " << e.what() << std::endl;
	}
}

void	conv_from_float(Convert const &n){
	float	nb = std::stof(n.getStr());
	
	try{
		std::cout << "CHAR   : " << static_cast<char>(nb) << std::endl;
	}
	catch (std::exception &e){
		std::cout << "CHAR	 : " << e.what() << std::endl;
	}
	try{
		std::cout << "INT    : " << static_cast<int>(nb) << std::endl;
	}
	catch (std::exception &e){
		std::cout << "INT	 : " << e.what() << std::endl;
	}
	std::cout << "FLOAT  : " << nb << std::endl;
	try{
		std::cout << "DOUBLE : " << static_cast<double>(nb) << std::endl;
	}
	catch (std::exception &e){
		std::cout << "DOUBLE : " << e.what() << std::endl;
	}
}

void	conv_from_double(Convert const &n){
	double	nb = std::stod(n.getStr());
	
	try{
		std::cout << "CHAR   : " << static_cast<char>(nb) << std::endl;
	}
	catch (std::exception &e){
		std::cout << "CHAR	 : " << e.what() << std::endl;
	}
	try{
		std::cout << "INT    : " << static_cast<int>(nb) << std::endl;
	}
	catch (std::exception &e){
		std::cout << "INT	 : " << e.what() << std::endl;
	}
	try{
		std::cout << "FLOAT  : " << static_cast<float>(nb) << std::endl;
	}
	catch (std::exception &e){
		std::cout << "FLOAT  : " << e.what() << std::endl;
	}
	std::cout << "DOUBLE : " << nb << std::endl;
}

void	conv_from_char(Convert const &n){
	char	c = n.getStr()[0];
	
	std::cout << "CHAR   : " << c << std::endl;
	try{
		std::cout << "INT    : " << static_cast<int>(c) << std::endl;
	}
	catch (std::exception &e){
		std::cout << "INT	 : " << e.what() << std::endl;
	}
	try{
		std::cout << "FLOAT  : " << static_cast<float>(c) << std::endl;
	}
	catch (std::exception &e){
		std::cout << "FLOAT : " << e.what() << std::endl;
	}
	try{
		std::cout << "DOUBLE : " << static_cast<double>(c) << std::endl;
	}
	catch (std::exception &e){
		std::cout << "DOUBLE : " << e.what() << std::endl;
	}
}

int	main(int argc, char **argv){
	if (argc != 2)
		return (1);
	Convert	n(argv[1]);
	int	type = n.getType();
	if (type == 4)
		return (1);
	void	(*dict_fct[4])(Convert const &n) = {&conv_from_int, &conv_from_double, &conv_from_float, &conv_from_char};
	dict_fct[type](n);
	return (0);
}
