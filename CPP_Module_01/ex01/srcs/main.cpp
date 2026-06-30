/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 01:57:09 by ahwang            #+#    #+#             */
/*   Updated: 2026/06/30 02:08:39 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.h"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		std::string temp = name;
		temp += '_';
		temp += (i + 48 + 1);
		zombieHorde[i].set_zombie_name(temp);
	}
	return (zombieHorde);
}

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
	{
		std::cout << "error: Argument error" << std::endl;
		return (1);
	}

	int		N_int = 6;
	std::string	zombie_name = "zombie";

	Zombie *zombie = zombieHorde(N_int, zombie_name);
	for (int i = 0; i < N_int; i++)
		zombie[i].announce();
	delete [] zombie;
	return (0);
}
