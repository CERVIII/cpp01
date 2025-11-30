/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 21:55:26 by pcervill          #+#    #+#             */
/*   Updated: 2025/11/30 21:58:52 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

#include <iostream>
#include <fstream>
#include <string>

class File
{
	private:
		std::string outfile;
		std::string infile;
	public:
		File(std::string filename);
		~File();
		void	replace(std::string s1, std::string s2);
};

#endif