/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 06:21:08 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/23 18:32:26 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	Fixed const	_x;
	Fixed const	_y;

public:
	Point();
	Point(Point const &src);
	Point(float x, float y);
	~Point();

	Point	&operator=(Point const &rhs);
	Point	operator-(Point const &rhs) const;
	const Fixed	&getX(void) const;
	const Fixed	&getY(void) const;
};

#endif