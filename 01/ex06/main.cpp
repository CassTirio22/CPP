/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:56:11 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/21 17:11:19 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv){
	int			i = -1;
	Karen		karen;
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	if (argc != 2){
		std::cout << "Usage : ./karenFilter <level>" << std::endl;
		return (0);
	}
	std::string	chosed = argv[1];

	for (int j = 0; j < 4; j++)
		if (levels[j] == chosed)
			i = j;
	if (i == -1){
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (0);
	}
	while (i < 4)
		karen.complain(levels[i++]);
	return (0);
}