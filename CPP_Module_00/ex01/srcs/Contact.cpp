/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 01:23:51 by ahwang            #+#    #+#             */
/*   Updated: 2026/06/30 01:36:30 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Contact.hpp"

Contact::Contact()
{
	_contact[FIRST_NAME] = "";
	_contact[LAST_NAME] = "";
	_contact[NICKNAME] = "";
	_contact[PHONE_NUMBER] = "";
	_contact[DARKEST_SECRET] = "";
}

int	Contact::add(void)
{
	std::string	check;

	for (int i = 0; i < MAX_FIELD; i++)
	{
		if (add_contact(_contact, i))
			return (1);
	}
	show_input();
	return (0);
}

std::string	Contact::get_value(int i)
{
	return (_contact[i]);
}

void	Contact::search(void)
{
	show_input();
}

Contact::~Contact()
{
	
}

int	Contact::add_contact(std::string *contact, int i)
{
	std::string	str;

	if (i == 0)
		str = "first name";
	else if (i == 1)
		str = "last name";
	else if (i == 2)
		str = "nickname";
	else if (i == 3)
		str = "phone number";
	else
		str = "darkest secret";
	while (1)
	{
		std::cout << "    Please type " << str << std::endl;
		std::cout << "    " << ':' << ' ';
		std::getline(std::cin, contact[i]);

		if (std::cin.eof())
		{
			std::cout << "^D" << std::endl;
			return (1);
		}
		else if (contact[i] == "")
		{
			std::cout << "Input is empty" << std::endl;
			continue ;
		}
		else
			break ;
	}
	if (i == PHONE_NUMBER)
		check_valid_input(contact, i);
	return (0);
}

void	Contact::check_valid_input(std::string *contact, int i)
{
	int		j;

	j = 0;
	if (i == PHONE_NUMBER)
	{
		while (j < (int)contact[i].length())
		{			
			if (!(0 <= contact[i][j] - 48 && contact[i][j] - 48 <= 9))
			{
				std::cout << "Invalid character exists" << std::endl;
				add_contact(contact, i);
			}
			else
				j++;
		}
	}
}

void	Contact::show_input(void)
{
	std::cout << "    First name:\t" << _contact[FIRST_NAME] << std::endl;
	std::cout << "    Last name:\t" << _contact[LAST_NAME] << std::endl;
	std::cout << "    Nickname:\t" << _contact[NICKNAME] << std::endl;
	std::cout << "    Phone number:\t" << _contact[PHONE_NUMBER] << std::endl;
	std::cout << "    Darkest secret:\t" << _contact[DARKEST_SECRET] << std::endl;
}
