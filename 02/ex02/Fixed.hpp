/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 02:36:47 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/23 16:58:58 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int	_n;
	static const int _fract = 8;

public:
	Fixed(void);
	Fixed(int const n);
	Fixed(float const n);
	Fixed(Fixed const &src);
	~Fixed(void);

	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	Fixed	&operator=(Fixed const &rhs);

	bool	operator==(Fixed const &rhs) const;
	bool	operator!=(Fixed const &rhs) const;
	bool	operator<(Fixed const &rhs) const;
	bool	operator>(Fixed const &rhs) const;
	bool	operator<=(Fixed const &rhs) const;
	bool	operator>=(Fixed const &rhs) const;

	Fixed	operator+(Fixed const &rhs) const;
	Fixed	operator-(Fixed const &rhs) const;
	Fixed	operator*(Fixed const &rhs) const;
	Fixed	operator/(Fixed const &rhs) const;

	Fixed	operator++(int nb);
	Fixed	operator--(int nb);
	Fixed	&operator++(void);
	Fixed	&operator--(void);

	static Fixed	&min(Fixed &a, Fixed &b);
	static Fixed	&max(Fixed &a, Fixed &b);

	static const Fixed	&min(Fixed const &a, Fixed const &b);
	static const Fixed	&max(Fixed const &a, Fixed const &b);

};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif