/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:08:32 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/12 12:08:33 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {};
Harl::~Harl(void) {};

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup";
	std::cout << " burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more";
	std::cout << "money. You didn’t put enough bacon in my burger! If you did";
	std::cout << ", I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve";
	std::cout << " been coming for years whereas you started working here";
	std::cout << " since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

/*void Harl::complain(std::string level)
{
	typedef void (Harl::*func) (void);
	std::map<std::string, func> options;
	options["INFO"] = Harl::info();
	options["WARNING"] = Harl::warning();
	options["ERROR"] = Harl::error();
	options["DEBUG"] = Harl::debug();
	options[level];
}*/

void Harl::complain(std::string level)
{
	typedef void (Harl::*harl_func_t) (void);
	harl_func_t	func[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (size_t i = 0; i < 4; i += 1)
		if (level == levels[i])
			(this->*func[i])();
}
