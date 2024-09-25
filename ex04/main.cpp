/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:34:21 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/25 17:01:42 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

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

int	main(int argc, char **argv)
{
	std::string		filename;
	std::string		s1;
	std::string		aux;
	std::fstream	fileIn;
	std::fstream	fileOut;
	int				i;
	int				j;

	num_ex("ex04");
	if (argc != 4)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}
	filename = argv[1];
	filename.append(".replace");
	fileIn.open(argv[1], std::ios::in);
	if (!fileIn.is_open())
	{
		std::cout << "File not found" << std::endl;
		return (1);
	}
	fileOut.open(filename.c_str(), std::ios::out);
	while (!fileIn.eof())
	{
		std::getline(fileIn, s1);
		i = 0;
		while (s1.c_str()[i])
		{
			j = 0;
			if (s1.c_str()[i] == argv[2][0])
			{
				while (s1.c_str()[i] == argv[2][j])
				{
					i++;
					j++;
					if (!argv[2][j])
					{
						fileOut << argv[3];
						break;
					}
					else if (s1.c_str()[i] != argv[2][j])
					{
						while (j > 0)
							fileOut << s1.c_str()[i - j--];
						break;
					}
				}
			}
			else
				fileOut << s1.c_str()[i++];
		}
		if (fileIn.eof())
			break;
		else
		{
//			std::cout << std::endl;
			fileOut << std::endl;
		}
	}
	fileIn.close();
	fileOut.close();
	return (0);
}
