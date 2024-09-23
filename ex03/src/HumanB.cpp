/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:29:31 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/23 19:20:19 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(std::string _name)
{
	name = _name;
	weapon = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &_weapon)
{
	weapon = &_weapon;
}

void HumanB::attack()
{
	if (weapon == NULL || weapon->getType().empty())
		std::cout << name << " has no weapon" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}