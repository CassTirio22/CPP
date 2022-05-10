/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:04:26 by ctirions          #+#    #+#             */
/*   Updated: 2022/05/10 14:36:09 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
private:
	std::string const	_name;
	bool				_sign;
	int const			_wGrade;
	int const			_xGrade;

public:
	Form(void);
	Form(std::string const name, int wGrade, int xGrade);
	Form(Form const &src);
	~Form();

	Form	&operator=(Form const &rhs);

	std::string const	getName(void) const;
	bool				getSign(void) const;
	int					getWGrade(void) const;
	int					getXGrade(void) const;
	
	void	beSigned(Bureaucrat const &b);

	class GradeTooHighException : public std::exception{
	public:
		virtual const char	*what() const throw();
	};

	class GradeTooLowException : public std::exception{
	public:
		virtual const char	*what() const throw();
	};

};

std::ostream	&operator<<(std::ostream &o, Form const &rhs);

#endif