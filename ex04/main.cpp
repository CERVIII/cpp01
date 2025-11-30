/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:34:21 by pcervill          #+#    #+#             */
/*   Updated: 2025/11/30 23:31:51 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid number of arguments" << std::endl;
	}
	else
	{
		File file(argv[1]);
		file.replace(argv[2], argv[3]);
	}
}
