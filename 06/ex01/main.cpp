/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:10:59 by ctirions          #+#    #+#             */
/*   Updated: 2022/05/12 13:28:45 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

typedef struct s_Data{
	int	i;
}				Data;

uintptr_t	serialize(Data *ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw){
	return (reinterpret_cast<Data *>(raw));
}

int	main(void){
	Data		d;
	Data		*d_ptr;
	uintptr_t	u_i;

	d.i = 42;
	std::cout << "PTR          : " << &d << std::endl;
	u_i = serialize(&d);
	d_ptr = deserialize(u_i);
	std::cout << "PTR          : " << d_ptr << std::endl;
	std::cout << "Unsigned int : " << u_i << std::endl;
	return (0);
}
