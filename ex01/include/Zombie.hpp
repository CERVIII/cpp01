/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:38:11 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/23 16:34:52 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <sstream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		Zombie(std::string _name);
		void setZombie(std::string _name);
		void announce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
Zombie	*zombieHorde(int N, std::string name);

/* UTILS */
std::string to_string( int i );

#endif