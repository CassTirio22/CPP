/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 00:29:10 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/17 14:25:48 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/phone_book.class.hpp"

PhoneBook::PhoneBook(void){
	this->id = -1;
	this->nb = 0;
}

PhoneBook::~PhoneBook(void){}

Contact	*PhoneBook::get_contact(void){
	this->id++;
	this->id %= 8;
	if (this->nb < 8)
		this->nb++;
	return (&this->contact_lst[this->id]);
}

void	PhoneBook::add_contact(Contact *contact)
{
	std::string	input;

	std::cout << "Enter your first name : ";
	std::getline(std::cin, input);
	contact->set_first_name(input);
	std::cout << "Enter your last name : ";
	std::getline(std::cin, input);
	contact->set_last_name(input);
	std::cout << "Enter your nickname : ";
	std::getline(std::cin, input);
	contact->set_nickname(input);
	std::cout << "Enter your phone number : ";
	std::getline(std::cin, input);
	contact->set_number(input);
	std::cout << "Enter your darkest secret : ";
	std::getline(std::cin, input);
	contact->set_secret(input);
}

void	PhoneBook::aff_book(void){
	std::string	input;
	int			id = 0;

	if (!this->nb)
		return ;
	std::cout << "|Index     |First name|Last name |Nickname  |" << std::endl;
	for (int i = 0; i < this->nb; i++){
		std::cout << "|" << i << "         |";
		this->print_line(this->contact_lst[i].get_first_name());
		this->print_line(this->contact_lst[i].get_last_name());
		this->print_line(this->contact_lst[i].get_nickname());
		std::cout << std::endl;
	}
	std::cout << "Enter a ID : ";
	std::getline(std::cin, input);
	id = std::stoi(input);
	if (id < 0 || id > this->nb - 1){
		std::cout << "Please enter a valid ID ..." << std::endl;
		return (this->aff_book());
	}
	std::cout << "First name     : " << this->contact_lst[id].get_first_name() << std::endl;
	std::cout << "Last name      : " << this->contact_lst[id].get_last_name() << std::endl;
	std::cout << "Nickname       : " << this->contact_lst[id].get_nickname() << std::endl;
	std::cout << "Phone number   : " << this->contact_lst[id].get_number() << std::endl;
	std::cout << "Darkest secret : " << this->contact_lst[id].get_secret() << std::endl;
}

void	PhoneBook::print_line(std::string str){
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".|";
	else{
		std::cout << str;
		for (int i = 0; i < (int)(10 - str.length()); i++)
			std::cout << " ";
		std::cout << "|";
	}
}
