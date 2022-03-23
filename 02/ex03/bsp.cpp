/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 06:37:31 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/23 19:00:07 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

float	getSide(Point const a, Point const b, Point const point){
	Fixed	ret = (point - b).getX() * (a - b).getY() - (a - b).getX() * (point - b).getY();

	return (ret.toFloat());
}

bool	bsp(Point const a, Point const b, Point const c, Point const point){
	bool	pos, neg;
	float	b1 = getSide(a, b, point);
	float	b2 = getSide(c, a, point);
	float	b3 = getSide(b, c, point);
	
	pos = ((b1 >= 0) || (b2 >= 0) || b3 >= 0);
	neg = ((b1 <= 0) || (b2 <= 0) || b3 <= 0);
	return (!(neg && pos));
}
