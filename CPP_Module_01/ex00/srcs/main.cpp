/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 01:47:54 by ahwang            #+#    #+#             */
/*   Updated: 2026/06/30 01:52:09 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.h"
#include "../incs/Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*newZombie = new Zombie(name);
	return (newZombie);
};

void	randomChump(std::string name)
{
	if (name[0] == 's')
	{
		Zombie	stackZombie = Zombie(name);
		stackZombie.announce();
	}
	else if (name[0] == 'h')
	{
		Zombie	*heapZombie = newZombie(name);
		heapZombie->announce();
		delete heapZombie;
	}
	else
	{
		Zombie	stackZombie = Zombie(name);
		stackZombie.announce();
	}
}

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
	{
		std::cout << "Argument error" << std::endl;
		return (1);
	}

	Zombie	stackZombie_main = Zombie("stackZombie_main");
	stackZombie_main.announce();
	std::cout << std::endl;

	Zombie	*heapZombie_main = newZombie("heapZombie_main");
	heapZombie_main->announce();
	delete heapZombie_main;
	std::cout << std::endl;

	/* stack */
	randomChump("s0");
	std::cout << std::endl;

	/* stack */
	randomChump("s1");
	std::cout << std::endl;

	/* heap */
	randomChump("h0");
	std::cout << std::endl;

	/* heap */
	randomChump("h1");
	std::cout << std::endl;

	/* stack */
	randomChump("r");
	std::cout << std::endl;

	return (0);
}
