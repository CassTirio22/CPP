/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 00:29:18 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/17 01:23:05 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.class.hpp"

int	main(void){
	std::string	input;
	PhoneBook	phone_book;
	Contact		*contact;

	while(1){
		std::cout << "Type ADD, SEARCH or EXIT : ";
		std::getline(std::cin, input);
		if (input == "EXIT")
			return (0);
		else if (input == "ADD"){
			contact = phone_book.get_contact();
			phone_book.add_contact(contact);
		}
		else if (input == "SEARCH")
			phone_book.aff_book();
	}

}
