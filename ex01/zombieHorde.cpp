/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:14:40 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/09 18:14:42 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *primeiro = new Zombie[N];
	for (int i = 0; i < N; i++)
		primeiro[i].setName(name);
	return primeiro;
}