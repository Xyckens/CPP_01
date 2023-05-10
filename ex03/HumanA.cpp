/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 21:05:37 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/09 21:05:39 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
# include "Weapon.hpp"


void	HumanA::setName(std::string name)
{
	this->name = name;
}

void	HumanA::setWeapon(Weapon* weapon)
{
	this->weapon = weapon;
}

HumanA::HumanA(std::string name, Weapon* weapon)
{
	this->setName(name);
	this->setWeapon(weapon);
}

void HumanA::attack(void)
{
	std::cout << HumanA::name << " attacks with their ";
	std::cout  << this->weapon->getType() << std::endl;
}
HumanA::~HumanA()
{
	std::cout << HumanA::name << " died.\n";
}