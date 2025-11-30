/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:34:21 by pcervill          #+#    #+#             */
/*   Updated: 2025/11/30 23:23:58 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./File.hpp"

void	File::replace(std::string s1, std::string s2)
{
	std::ifstream	file;
	std::ofstream	fileOut;
	std::string		line;
	size_t			index;

	file.open(this->infile);
	if (file.is_open())
	{
		if (std::getline(file, line, '\0'))
		{
			fileOut.open(this->outfile);
			index = line.find(s1);
			while (index != std::string::npos)
			{
				line.erase(index, s1.length());
				line.insert(index, s2);
				index = line.find(s1);
			}
			fileOut << line;
			fileOut.close();
		}
		else
			std::cout << "Empty File";
		file.close();
	}
	else
		std::cout << "File not found" << std::endl;
}

File::File(std::string filename) : infile(filename)
{
	this->outfile = this->infile + ".replace";
}

File::~File(){}
