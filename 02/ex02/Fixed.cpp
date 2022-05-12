/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 02:45:06 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/23 16:58:46 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0){
}

Fixed::Fixed(int const n){
	this->_n = n << this->_fract;
}

Fixed::Fixed(float const n){
	this->_n = roundf(n * (1 << this->_fract));
}

Fixed::Fixed(Fixed const &src){
	*this = src;
}

Fixed::~Fixed(void){
}

float	Fixed::toFloat(void) const{
	return ((float)this->_n / (1 << this->_fract));
}

int	Fixed::toInt(void) const{
	return (this->_n >> this->_fract);
}

int	Fixed::getRawBits(void) const{
	return (this->_n);
}

void	Fixed::setRawBits(int const raw){
	this->_n = raw;
}

Fixed &Fixed::operator=(Fixed const &rhs){
	if (this != &rhs)
		this->_n = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator==(Fixed const &rhs) const{
	if (this->_n == rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &rhs) const{
	if (this->_n != rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &rhs) const{
	if (this->_n < rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>(Fixed const &rhs) const{
	if (this->_n > rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &rhs) const{
	if (this->_n <= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &rhs) const{
	if (this->_n >= rhs.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(Fixed const &rhs) const{
	Fixed	ret(this->toFloat() + rhs.toFloat());
	return (ret);
}

Fixed	Fixed::operator-(Fixed const &rhs) const{
	Fixed	ret(this->toFloat() - rhs.toFloat());
	return (ret);
}

Fixed	Fixed::operator*(Fixed const &rhs) const{
	Fixed	ret(this->toFloat() * rhs.toFloat());
	return (ret);
}

Fixed	Fixed::operator/(Fixed const &rhs) const{
	return (this->_n / rhs.getRawBits());
}

Fixed	Fixed::operator++(int nb){
	(void)nb;
	Fixed ret = *this;
	this->_n++;
	return (ret);
}

Fixed	Fixed::operator--(int nb){
	(void)nb;
	Fixed	ret = *this;
	this->_n--;
	return (ret);
}

Fixed	&Fixed::operator++(void){
	this->_n++;
	return (*this);
}

Fixed	&Fixed::operator--(void){
	this->_n--;
	return (*this);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b){
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b){
	if (a < b)
		return (b);
	return (a);
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b){
	if (a < b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b){
	if (a < b)
		return (b);
	return (a);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs){
	o << rhs.toFloat();
	return (o);
}
