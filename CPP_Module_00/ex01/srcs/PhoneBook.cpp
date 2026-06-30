/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 01:08:05 by ahwang            #+#    #+#             */
/*   Updated: 2026/06/30 01:34:41 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_num_contact = 0;
}

int	PhoneBook::add(void)
{
	Contact		Contact;

	if (Contact.add())
		return (1);
	_Contact[_num_contact % MAX_CONTACT] = Contact;
	_num_contact++;
	return (0);
}

int	PhoneBook::search(void)
{
	std::string	input;
	std::string	check;
	int		int_input;

	show_phonebook_list();
	if (_num_contact == 0)
		return (0);
	while (1)
	{
		std::cout << "Please select an index" << std::endl;
		std::cout << "    " << '>' << ' ';
		std::getline(std::cin, input);

		if (std::cin.eof())
		{
			std::cout << "^D" << std::endl;
			return (1);
		}
		if (input == "")
		{
			std::cout << "Input is empty" << std::endl;
			continue ;
		}
		if (input.length() != 1 || !(0 <= input[0] - 48 && input[0] - 48 <= 9))
		{
			std::cout << "Invalid command" << std::endl;
			continue ;
		}
		if (input[0] - 48 == 0
			|| (_num_contact <= 8 && input[0] - 48 > _num_contact)
			|| (_num_contact > 8 && input[0] - 48 > 8))
		{
			std::cout << "Index is out of range" << std::endl;
			continue ;
		}
		break ;
	}
	int_input = input[0] - 48;
	if (int_input <= 8)
		_Contact[int_input - 1].search();
	else
		_Contact[(int_input % MAX_CONTACT) - 1].search();
	return (0);
}

PhoneBook::~PhoneBook()
{
	
}

void	PhoneBook::show_phonebook_list(void)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;

	if (_num_contact == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return ;
	}
	else
	{
		std::cout
			<< std::setw(10) << "index" << '|'
			<< std::setw(10) << "first name" << '|'
			<< std::setw(10) << "last name" << '|'
			<< std::setw(10) << "nickname" << std::endl << std::endl;

		for (int i = 0; i < _num_contact; i++)
		{
			first_name = _Contact[i % MAX_CONTACT].get_value(FIRST_NAME);
			last_name = _Contact[i % MAX_CONTACT].get_value(LAST_NAME);
			nickname = _Contact[i % MAX_CONTACT].get_value(NICKNAME);
			if (first_name.length() > 10)
			{
				first_name = first_name.substr(0, 9);
				first_name += '.';
			}
			if (last_name.length() > 10)
			{
				last_name = last_name.substr(0, 9);
				last_name += '.';
			}
			if (nickname.length() > 10)
			{
				nickname = nickname.substr(0, 9);
				nickname += '.';
			}
			if (i <= 7)
			{
				std::cout
					<< std::setw(10) << (i % MAX_CONTACT) + 1 << '|'
					<< std::setw(10) << first_name << '|'
					<< std::setw(10) << last_name << '|'
					<< std::setw(10) << nickname << std::endl << std::endl;
			}
		}
	}
}
