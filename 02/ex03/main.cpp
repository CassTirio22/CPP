/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 03:02:06 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/28 13:48:31 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
bool	bsp(Point const a, Point const b, Point const c, Point const point);

int main(void){
	Point const	a(-1, 2);
	Point const	b(-1, -1);
	Point const	c(2, 2);
	Point const	p1(4, 4);
	Point const	p2(0, 1);
	Point const	p3(1, 1.5);

	std::cout << "_--Point 1--_" << std::endl;
	if (bsp(a, b, c, p1))
		std::cout << "OUI" << std::endl;
	else
		std::cout << "NON" << std::endl;
		
	std::cout << "_--Point 2--_" << std::endl;
	if (bsp(a, b, c, p2))
		std::cout << "OUI" << std::endl;
	else
		std::cout << "NON" << std::endl;

	std::cout << "_--Point 3--_" << std::endl;
	if (bsp(a, b, c, p3))
		std::cout << "OUI" << std::endl;
	else
		std::cout << "NON" << std::endl;
	return (0);
}
