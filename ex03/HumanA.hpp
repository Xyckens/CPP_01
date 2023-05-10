/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 21:05:44 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/09 21:05:46 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
private:
	Weapon*		weapon;
	std::string	name;
public:
	HumanA(std::string name, Weapon* weapon);
	void	attack(void);
	void	setName(std::string name);
	void	setWeapon(Weapon* weapon);
	~HumanA();
	
};
#endif
