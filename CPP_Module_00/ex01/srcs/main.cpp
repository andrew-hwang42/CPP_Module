/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 01:06:54 by ahwang            #+#    #+#             */
/*   Updated: 2026/06/30 01:35:33 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include "../incs/PhoneBook.hpp"

void	err_args(void)
{
	std::cerr << "Error: Argument error" << std::endl;
}

int	main(int argc, char **argv)
{
	PhoneBook	PhoneBook;
	std::string	input;
	std::string	check;

	(void)argv;
	if (argc != 1)
	{
		err_args();
		return (1);
	}
	while (1)
	{
		std::cout << "Please type a command: ADD, SEARCH, or EXIT" << std::endl;
		std::cout << "    " << '>' << ' ';
		std::getline(std::cin, input);

		if (std::cin.eof())
		{
			std::cout << "^D" << std::endl;
			break ;
		}
		else if (input == "")
		{
			std::cout << "Input is empty" << std::endl;
			continue ;
		}
		else if (input != "ADD" && input != "SEARCH" && input != "EXIT")
		{
			std::cout << "Invalid command" << std::endl;
			continue ;
		}
		else
		{
			if (input == "ADD")
			{
				PhoneBook.add();
			}
			else if (input == "SEARCH")
				PhoneBook.search();
			else
			{
				std::cout << "Program Exit" << std::endl;
				break ;
			}
		}
	}
	return (0);
}
