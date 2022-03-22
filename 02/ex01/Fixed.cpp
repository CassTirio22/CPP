/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 02:45:06 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/22 04:27:55 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n){
	std::cout << "Int constructor called" << std::endl;
	this->_n = n << this->_fract;
}

Fixed::Fixed(float const n){
	std::cout << "Float constructor called" << std::endl;
	this->_n = roundf(n * (1 << this->_fract));
}

Fixed::Fixed(Fixed const &src){
	std::cout << "Copy constructeur called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
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
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_n = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs){
	o << rhs.toFloat();
	return (o);
}
