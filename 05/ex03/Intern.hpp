/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:08:08 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/08 19:12:07 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

class Intern{
public:
	Intern(void);
	Intern(Intern const &src);
	~Intern(void);

	Intern	&operator=(Intern const &rhs);

	Form	*makeForm(std::string const &name, std::string const &target) const;

};

#endif