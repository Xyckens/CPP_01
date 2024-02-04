/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:08:11 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/12 12:08:13 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int	main(int argc, char **argv)
{
	Harl	harl;
	
	if (argc != 2)
		return (0);
	std::string level(argv[1]);
	int a = 4;
    std::string	complaints[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for(int i = 0; i < 4; i++)
    {
        if(level == complaints[i])
           a = i;
    }
    switch(a){
        case 0:
            harl.complain("DEBUG");
        case 1:
            harl.complain("INFO");
        case 2:
            harl.complain("WARNING");
        case 3:
            harl.complain("ERROR");
            break;
        default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";

	}
	return (0);
}
