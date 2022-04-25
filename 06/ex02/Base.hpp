/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:11:37 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/21 14:27:19 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <string>
# include <iostream>
# include <cstdlib>

class Base{
public:
	virtual ~Base();
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

#endif