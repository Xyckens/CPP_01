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
	int		i;
	
	std::string level(argv[1]);
	if (level == "DEBUG")
		i = 1;
	else if (level == "INFO")
		i = 2;
	else if (level == "WARNING")
		i = 3;
	else if (level == "ERROR")
		i = 4;
	else
		i = 6;
	if (argc != 2)
		return (0);
	switch(i)
	{
		case 1:
			harl.complain("DEBUG");
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			break ;
		case 2:
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			break ;
		case 3:
			harl.complain("WARNING");
			harl.complain("ERROR");
			break ;
		case 4:
			harl.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";

	}
	return (0);
}
