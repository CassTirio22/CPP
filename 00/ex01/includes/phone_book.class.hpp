/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 00:18:10 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/17 02:41:53 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_CLASS_HPP
# define PHONE_BOOK_CLASS_HPP

# include <iostream>
# include <string>
# include "contact.class.hpp"

class	PhoneBook{
private:
	Contact	contact_lst[8];
	int		id;
	int		nb;

public:
	PhoneBook(void);
	~PhoneBook(void);

	Contact	*get_contact(void);
	void	add_contact(Contact *contact);

	void	aff_book(void);
	void	print_line(std::string str);
};

#endif
