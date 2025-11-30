/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:55:14 by pcervill          #+#    #+#             */
/*   Updated: 2025/11/30 21:32:18 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int	main (void)
{
	Zombie	*Horde;
	std::string name;
	int		i, n;

	n = 5;
	Horde = zombieHorde(n, "Zombie");
	i = 0;
	while (i < n)
		Horde[i++].announce();
	std::cout << std::endl;
	delete[] Horde;
	return (0);
}
