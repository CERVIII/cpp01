/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:34:21 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/25 14:03:24 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	main(int argc, char **argv)
{
	std::string		filename;
	std::string		s1;
	std::string		aux;
	std::fstream	fileIn;
	std::fstream	fileOut;
	int				i;
	int				j;

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
//						std::cout << argv[3];
						fileOut << argv[3];
						break;
					}
					else if (s1.c_str()[i] != argv[2][j])
					{
						while (j > 0)
						{
//							std::cout << s1.c_str()[i - j--];
							fileOut << s1.c_str()[i - j--];
						}
						break;
					}
				}
			}
			else
			{
//				std::cout << s1.c_str()[i];
				fileOut << s1.c_str()[i++];
			}
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
