/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:37:02 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/07 17:37:40 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREACRAT_HPP
# define BUREACRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat{
private:
	std::string const	_name;
	int					_grade;

public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat(void);

	Bureaucrat	&operator=(Bureaucrat const &rhs);

	std::string const	getName(void) const;
	int					getGrade(void) const;
	void				increaseGrade(void);
	void				decreaseGrade(void);

	class GradeTooHighException : public std::exception{
	public:
		virtual const char	*what() const throw();
	};
	class GradeTooLowException : public std::exception{
	public:
		virtual const char	*what() const throw();
	};

};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif