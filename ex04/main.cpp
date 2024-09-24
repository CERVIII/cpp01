/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:34:21 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/24 17:36:55 by pcervill         ###   ########.fr       */
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
	while (fileIn >> s1)
	{
		i = 0;
		while (s1[i])
		{
			j = 0;
			while (s1[i] == argv[2][j])
			{
				i++;
				j++;
				if (!argv[2][j])
				{
					fileOut << argv[3];
					break;
				}
			}
			fileOut << s1[i++];
		}
		
		fileOut << " ";
	}
	return (0);
}
