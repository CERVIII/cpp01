/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:02:18 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/25 16:56:28 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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

int main()
{
	std::string str;
	std::string *stringPTR;
	std::string &stringREF = str;

	num_ex("ex02");
	str = "HI THIS IS BRAIN";
	stringPTR = &str;

	std::cout << "Address of the str: " << &str << std::endl;
	std::cout << "Address of the stringPTR: " << stringPTR << std::endl;
	std::cout << "Address of the stringREF: " << &stringREF << std::endl;

	std::cout << "Value of the str: " << str << std::endl;
	std::cout << "Value of the stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of the stringREF: " << stringREF << std::endl;
	return (0);
}
