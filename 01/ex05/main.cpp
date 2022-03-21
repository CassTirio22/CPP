/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:56:11 by ctirions          #+#    #+#             */
/*   Updated: 2022/03/21 16:32:17 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void){
	Karen karen;

	karen.complain("DEBUG");
	karen.complain("KAREN");
	karen.complain("INFO");
	karen.complain("info");
	karen.complain("WARNING");
	karen.complain("WARNIN");
	karen.complain("ERROR");
	karen.complain("ROORE");
	return (0);
}