/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:33:45 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/18 16:12:13 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
private:
    Weapon      &weapon;
    std::string name;

public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA(void);

    void    attack(void);
};

#endif
