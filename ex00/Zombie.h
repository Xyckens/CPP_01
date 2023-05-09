/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:31:50 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/09 15:31:53 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include "Zombie.hpp"

void 	randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
