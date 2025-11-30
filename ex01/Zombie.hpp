/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:38:11 by pcervill          #+#    #+#             */
/*   Updated: 2025/11/30 21:05:27 by pcervill         ###   ########.fr       */
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
		void setZombie(std::string _name);
		void announce(void);
};
Zombie	*zombieHorde(int N, std::string name);

#endif