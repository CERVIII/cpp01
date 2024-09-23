/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:42:58 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/23 16:47:24 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string _name)
{
	name = _name;
}

void Zombie::setZombie(std::string _name)
{
	name = _name;
	std::cout << name << " created!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " deleted!" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
