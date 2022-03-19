/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 11:48:03 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/18 13:15:36 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void){
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "---------------------" << std::endl;
    std::cout << "        ADDR" << std::endl << "---------------------" << std::endl;
    
    std::cout << "&   : " << &str << std::endl;
    std::cout << "ptr : " << stringPTR << std::endl;
    std::cout << "ref : " << &stringREF << std::endl;

    std::cout << std::endl << "-----------------------" << std::endl;
    std::cout << "         STR" << std::endl << "-----------------------" << std::endl;

    std::cout << "str : " << str << std::endl;
    std::cout << "ptr : " << *stringPTR << std::endl;
    std::cout << "ref : " << stringREF << std::endl;
}
