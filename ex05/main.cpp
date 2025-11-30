/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:46:01 by pcervill          #+#    #+#             */
/*   Updated: 2025/11/30 23:53:06 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"
#include <iomanip>

int	main(void)
{
	Harl	harl;

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
