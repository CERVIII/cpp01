/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:25:11 by pcervill          #+#    #+#             */
/*   Updated: 2025/11/30 20:57:46 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int	i;
	Zombie	*zombies;

	i = 0;
	
	zombies = new Zombie[N];
	while (i < N)
	{
		zombies[i].setZombie(name);
		i++;
	}
	std::cout << std::endl;
	std::cout << "Horde created!!" << std::endl << std::endl;
	return (zombies);
}
