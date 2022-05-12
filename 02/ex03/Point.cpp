/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 06:21:06 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/23 18:41:16 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0)) {}

Point::Point(Point const &src) : _x(src.getX()), _y(src.getY()) {}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y)) {}

Point::~Point(void) {}

Point	&Point::operator=(Point const &rhs){
	(void)rhs;
	return (*this);
}

Point	Point::operator-(Point const&rhs) const {
	Point	ret(this->getX().toFloat() - rhs.getX().toFloat(), this->getY().toFloat() - rhs.getY().toFloat());

	return (ret);
}

const Fixed	&Point::getX(void) const {return (this->_x);}

const Fixed	&Point::getY(void) const {return (this->_y);}
