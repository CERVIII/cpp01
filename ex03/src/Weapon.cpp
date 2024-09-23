/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:11:00 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/23 19:09:48 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(std::string _type)
{
	type = _type;
}

Weapon::~Weapon()
{
}

std::string const Weapon::getType(void)
{
	return (type);
}

void Weapon::setType(std::string _type)
{
	type = _type;
}
