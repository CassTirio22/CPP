#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include "PhoneBook.hpp"

class	Contact{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	number;
	std::string	secret;

public:
	Contact(void);
	~Contact(void);

	void	set_first_name(std::string input);
	void	set_last_name(std::string input);
	void	set_nickname(std::string input);
	void	set_number(std::string input);
	void	set_secret(std::string input);

	std::string	get_first_name(void);
	std::string	get_last_name(void);
	std::string	get_nickname(void);
	std::string	get_number(void);
	std::string	get_secret(void);
};

#endif