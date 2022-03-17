/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 00:26:26 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/17 01:58:15 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.class.hpp"

Contact::Contact(void){}
Contact::~Contact(void){}

void	Contact::set_first_name(std::string input){
	this->first_name = input;
}

void	Contact::set_last_name(std::string input){
	this->last_name = input;
}

void	Contact::set_nickname(std::string input){
	this->nickname = input;
}

void	Contact::set_number(std::string input){
	this->number = input;
}

void	Contact::set_secret(std::string input){
	this->secret = input;
}

std::string	Contact::get_first_name(void){
	return (this->first_name);
}

std::string	Contact::get_last_name(void){
	return (this->last_name);
}

std::string	Contact::get_nickname(void){
	return (this->nickname);
}

std::string	Contact::get_number(void){
	return (this->number);
}
std::string	Contact::get_secret(void){
	return (this->secret);
}
