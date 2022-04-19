/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:14:31 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/19 16:05:45 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int	main(int argc, char **argv){
	if (argc != 2)
		return (1);
	Convert	n(argv[1]);
	int	type = n.getType();
	if (n == 4)
		return (1);
}
