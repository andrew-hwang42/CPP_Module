/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 01:56:47 by ahwang            #+#    #+#             */
/*   Updated: 2026/06/30 02:04:47 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::Zombie(std::string name)
{
	_name = name;
}

void	Zombie::set_zombie_name(std::string name)
{
	_name = name;
}

std::string	Zombie::get_zombie_name(void)
{
	return (_name);
}

void	Zombie::announce(void)
{
	std::cout << get_zombie_name()
		<< ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << get_zombie_name() << " is destroyed" << std::endl;
}
