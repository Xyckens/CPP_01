/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:17:59 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/09 15:18:01 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main(void)
{
	int N = 10;

	Zombie* horde = zombieHorde(N, "Jorginho");
	for (int i  = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}