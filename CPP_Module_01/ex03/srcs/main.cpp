/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 02:22:40 by ahwang            #+#    #+#             */
/*   Updated: 2026/06/30 02:30:08 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Weapon.hpp"
#include "../incs/HumanA.hpp"
#include "../incs/HumanB.hpp"

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
		return (1);

	{
	/* HumanA: always has a weapon */
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	}

	{
	/* HumanB: may have a weapon or may not */
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(club);	// need to make method setWeapon for HumanB class
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	}
	return (0);
}
