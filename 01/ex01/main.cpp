/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 11:48:03 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/18 12:51:31 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
    Zombie      *horde;
    const int   N = 19;
    
    horde = zombieHorde(N, "Babo");
    for (int i = 0; i < N; i++)
        horde[i].annouce();
    delete [] horde;
    return (0);
}
