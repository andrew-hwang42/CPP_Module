/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 02:16:10 by ahwang            #+#    #+#             */
/*   Updated: 2026/06/30 02:18:21 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
	{
		std::cout << "error: Argument error" << std::endl;
		return (1);
	}

	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "address of string: " << &string << std::endl;
	std::cout << "address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "address held by stringREF: " << &stringREF << std::endl;
	
	std::cout << std::endl;
	std::cout << "value of string: " << string << std::endl;
	std::cout << "value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF: " << stringREF << std::endl;

	return (0);
}