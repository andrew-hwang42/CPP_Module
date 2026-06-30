/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 02:22:32 by ahwang            #+#    #+#             */
/*   Updated: 2026/06/30 02:26:50 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/HumanA.hpp"

HumanA::HumanA(Weapon& weapon) : _weapon(weapon)
{
}

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
}

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with their "
		<< _weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
}
