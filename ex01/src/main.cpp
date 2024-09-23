/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:55:14 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/23 16:56:14 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

std::string to_string( int i ) {
	std::ostringstream oss;
	oss << i;
	return oss.str();
}

void	num_ex(std::string ex)
{
	std::string boxUp, boxDwn;
	
	boxUp = "┌──────────────────────────────────────┐";
	boxDwn = "└──────────────────────────────────────┘";
	std::cout << boxUp << std::endl;
	std::cout << "│" << std::setw(20) << ex;
	std::cout << std::setw(21) << "│" << std::endl;
	std::cout << boxDwn << std::endl;
	std::cout << std::endl;
}

int	main (void)
{
	Zombie	*Horde;
	std::string name;
	int		i, x;

	num_ex("EX01");
	i = 5;
	Horde = zombieHorde(i, "Zombie_");
	x = 0;
	while (x < i)
		Horde[x++].announce();
	std::cout << std::endl;
	x = 0;
	delete[] Horde;
	return (0);
}
