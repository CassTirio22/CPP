/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:19:30 by ctirions          #+#    #+#             */
/*   Updated: 2022/05/21 10:54:57 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// int	main(void){
// 	Array<int>			IntArray(4);
// 	Array<char>			CharArray(6);
// 	Array<std::string>	StrArray(2);

// 	std::cout << "--------------------------" << std::endl << std::endl;
	
// 	try{
// 		CharArray[10] = 'A';
// 	}
// 	catch (std::exception &e){
// 		std::cout << e.what() << std::endl;
// 	}
	
// 	std::cout << "--------------------------" << std::endl << std::endl;
	
// 	size_t size = IntArray.size();
// 	for (size_t i = 0; i < size; i++)
// 		IntArray[i] = 0;
// 	IntArray[1] = 42;
// 	for (size_t i = 0; i < size; i++)
// 		std::cout << "IntArray[" << i << "] : " << IntArray[i] << " | ";
// 	std::cout << std::endl;

// 	std::cout << "--------------------------" << std::endl << std::endl;

// 	size = CharArray.size();
// 	for (size_t i = 0; i < size; i++)
// 		CharArray[i] = 'a';
// 	CharArray[3] = 'A';
// 	for (size_t i = 0; i < size; i++)
// 		std::cout << "CharArray[" << i << "] : " << CharArray[i] << " | ";
// 	std::cout << std::endl;

// 	std::cout << "--------------------------" << std::endl << std::endl;

// 	size = StrArray.size();
// 	for (size_t i = 0; i < size; i++)
// 		StrArray[i] = "Coucou";
// 	StrArray[1] = "Hello";
// 	for (size_t i = 0; i < size; i++)
// 		std::cout << "StrArray[" << i << "] : " << StrArray[i] << " | ";
// 	std::cout << std::endl;

// 	return (0);
// }


#define MAX_VAL 750

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);

		std::cout << "Surcharge operator --> tmp[2]  : " << tmp[2] << std::endl;
		std::cout << "Copy constructor   --> test[2] : " << test[2] << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}