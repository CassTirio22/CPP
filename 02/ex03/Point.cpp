/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 06:21:06 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/22 06:49:52 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::~Point(void) {}

Point	&Point::operator=(Point const &rhs){
	this->_x = rhs.getX();
	this->_y = rhs.getY();
	return (*this);
}

Point	Point::operator-(Point const&rhs) const {
	Point	ret(this->getX().toFloat() - rhs.getX().toFloat(), this->getY().toFloat() - rhs.getY().toFloat());

	return (ret);
}

Fixed	Point::getX(void) const {return (this->_x);}

Fixed	Point::getY(void) const {return (this->_y);}
