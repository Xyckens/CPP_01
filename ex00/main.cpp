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
	Zombie* heap = newZombie("frank");
	heap->announce();
	randomChump("tom");
	delete heap;
	return (0);
}
