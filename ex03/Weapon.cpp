/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:11:00 by pcervill          #+#    #+#             */
/*   Updated: 2025/11/30 21:44:09 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"

Weapon::Weapon(std::string _type)
{
	type = _type;
}

Weapon::~Weapon(){}

const std::string &Weapon::getType(void)
{
	return (type);
}

void Weapon::setType(std::string _type)
{
	type = _type;
}
