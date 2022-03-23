/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 03:02:06 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/23 18:59:49 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
bool	bsp(Point const a, Point const b, Point const c, Point const point);

int main(void){
	Point const	a(-1, 2);
	Point const	b(-1, -1);
	Point const	c(2, 2);
	Point const	p(0.5, 0.6);

	if (bsp(a, b, c, p))
		std::cout << "OUI" << std::endl;
	else
		std::cout << "NON" << std::endl;
	return (0);
}
