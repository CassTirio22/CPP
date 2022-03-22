/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 03:02:06 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/22 08:11:16 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
bool	bsp(Point const a, Point const b, Point const c, Point const point);

int main(void){
	Point	a(-1, 2);
	Point	b(-1, -1);
	Point	c(2, 2);
	Point	p(0.5, 0.6);

	if (bsp(a, b, c, p))
		std::cout << "OUI";
	else
		std::cout << "NON";
	std::cout << std::endl;
	return (0);
}
