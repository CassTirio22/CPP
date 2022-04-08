/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:32:18 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/08 15:44:53 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form{
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string const target);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	~PresidentialPardonForm(void);

	PresidentialPardonForm	&operator=(PresidentialPardonForm const &rhs);
	
	void	execute(Bureaucrat const &executor) const;

};

#endif
