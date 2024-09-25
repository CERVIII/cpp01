/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:55:14 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/25 16:56:20 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

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
	Zombie	*zombie1 = newZombie("Heap Zombie");

	num_ex("EX00");
	zombie1->announce();
	randomChump("Stack Zombie");
	delete (zombie1);
	return (0);
}
