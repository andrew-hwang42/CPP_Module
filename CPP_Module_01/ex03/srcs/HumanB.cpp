/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 02:22:24 by ahwang            #+#    #+#             */
/*   Updated: 2026/06/30 02:31:35 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (_weapon)
		std::cout << _name << " attacks with their "
			<< _weapon->getType() << std::endl;
	else
		std::cout << _name << " doesn't have wepon. "
			<< _name << " can't attack" << std::endl;
}

HumanB::~HumanB()
{
}