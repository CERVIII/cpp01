/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:55:14 by pcervill          #+#    #+#             */
/*   Updated: 2025/11/30 20:48:55 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int	main (void)
{
	Zombie	*zombie1 = newZombie("Heap");

	zombie1->announce();
	randomChump("Stack");
	delete (zombie1);
	return (0);
}
