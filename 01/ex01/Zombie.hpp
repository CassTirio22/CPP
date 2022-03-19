/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 11:49:08 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/18 12:45:15 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
private:
    std::string name;

public:
    Zombie(void);
    ~Zombie(void);
    
    void    annouce(void);
    void    set_name(std::string);
};

Zombie  *zombieHorde(int N, std::string name);

#endif
