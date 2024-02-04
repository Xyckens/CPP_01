/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 21:05:30 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/09 21:05:32 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"


void	HumanB::setName(std::string name)
{
	this->name = name;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

HumanB::HumanB(std::string name)
{
	this->setName(name);
}

void HumanB::attack(void)
{
	std::cout << HumanB::name << " attacks with their ";
	if(this->weapon)
		std::cout  << this->weapon->getType() << std::endl;
}
HumanB::~HumanB()
{
	std::cout << HumanB::name << " died.\n";
}