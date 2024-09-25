/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:46:01 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/25 17:11:35 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"
#include <iomanip>

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

int	main(void)
{
	Harl	harl;

	num_ex("ex05");
	std::cout << "comment DEBUG:" << std::endl;
	harl.complain("debug");
	std::cout << std::endl;
	std::cout << "comment INFO:" << std::endl;
	harl.complain("info");
	std::cout << std::endl;
	std::cout << "comment WARNING:" << std::endl;
	harl.complain("warning");
	std::cout << std::endl;
	std::cout << "comment ERROR:" << std::endl;
	harl.complain("error");
	std::cout << std::endl;
	std::cout << "comment RANDOM:" << std::endl;
	harl.complain("hoolaaa");
	std::cout << std::endl;
	return (0);
}
