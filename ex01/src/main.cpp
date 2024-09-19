/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:55:14 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/19 14:43:08 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int	main (void)
{
	Zombie	*zombie1 = newZombie("Heap Zombie");

	zombie1->announce();
	randomChump("Stack Zombie");
	delete (zombie1);
	return (0);
}
