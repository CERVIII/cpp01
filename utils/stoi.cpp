/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stoi.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:30:34 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/23 16:31:44 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>

static int stoi( std::string & s ) {
	int i;
	std::istringstream(s) >> i;
	return i;
}