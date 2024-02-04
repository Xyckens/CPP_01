/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:18:59 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/09 15:19:00 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie::Zombie(std::string name)
{
	setName(name);
	std::cout << this->name << " created.\n";
}

Zombie::Zombie(void)
{
	std::cout << "Zombie created.\n";
}

Zombie::~Zombie(void)
{
	std::cout << Zombie::name << " exterminated.\n";
}