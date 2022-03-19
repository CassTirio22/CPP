/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 14:17:15 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/19 17:15:07 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char **argv){
    if (argc != 4){
        std::cout << "Usage : ./replace <filename> <s1> <s2>" << std::endl;
        return (1);
    }
    Replace replace(argv[1], argv[2], argv[3]);
    replace.checkArgs();
    replace.makeReplaceFile();
    return (0);
}