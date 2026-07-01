/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 01:11:15 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/01 01:15:41 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Harl.hpp"

Harl::Harl()
{
}

void	Harl::complain(std::string level)
{
	typedef void(Harl::*func_ptr)(void);
	
	func_ptr	func[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	level_list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level_list[i] == level)
		{
			(this->*func[i])();
			return ;
		}
	}
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl
		<<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
		<< std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl
		<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
		<< std::endl;
		
	
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl
		<< "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."
		<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl
		<< "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}
