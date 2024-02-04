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

int	main(void)
{
	Harl	harl;
	//harl.complain("DEBUG");
	//harl.complain("ERROR");
	harl.complain("INFO");
	harl.complain("WARNING");

	std::cout << "\nWrong answers:\n\n";
	harl.complain("WARNINGDSAD");
	harl.complain("error");
	harl.complain("");

	return (0);
}
