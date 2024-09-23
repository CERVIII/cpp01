/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:25:11 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/23 16:47:39 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int	i;
	Zombie	*zombies;

	i = 0;
	
	zombies = new Zombie[N];
	while (i < N)
	{
		zombies[i].setZombie(name + to_string(i + 1));
		i++;
	}
	std::cout << std::endl;
	std::cout << "Horde created!!" << std::endl << std::endl;
	return (zombies);
}
