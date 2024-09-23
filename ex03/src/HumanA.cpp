/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:25:04 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/23 19:11:02 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon) : weapon(_weapon)
{
	name = _name;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	if (weapon.getType().empty())
		std::cout << name << " has no weapon" << std::endl;
	else
		std::cout << name << " attack with their " << weapon.getType() << std::endl;
}