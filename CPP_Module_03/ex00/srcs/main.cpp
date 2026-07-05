/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 04:11:11 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/04 22:03:57 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ClapTrap.hpp"

# define CYAN			"\x1b[36m"

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
	{
		std::cout << "Arument error" << std::endl;
		return (1);
	}
	ClapTrap A("A");
	ClapTrap B("B");

	std::cout << std::endl << CYAN << "[test01] Attack: A attacks B"
		<< BLACK << std::endl << std::endl;
	int	hit = 0;
	for (int i = 0; i < 11; i++)
	{
		std::cout << CYAN << "A hits B - " << i + 1 << " times" << BLACK << std::endl;
		hit = A.get_energy_points();
		A.attack(B.get_name());
		if (hit)
			B.takeDamage(A.get_attack_damage());
	}
	std::cout << CYAN << "A: hit point: " << BLACK << A.get_hit_points() << std::endl;
	std::cout << CYAN << "A: energy point: " << BLACK << A.get_energy_points() << std::endl;
	std::cout << CYAN << "B: hit point: " << BLACK << B.get_hit_points() << std::endl;
	std::cout << CYAN << "B: energy point: " << BLACK << B.get_energy_points() << std::endl;

	std::cout << std::endl << CYAN << "[test02] Repair: B repairs itself"
		<< BLACK << std::endl << std::endl;
	for (int i = 0; i < 11; i++)
	{
		std::cout << CYAN << "B repairs itself - " << i + 1 << " times" << BLACK << std::endl;
		B.beRepaired(10);
	}
	std::cout << CYAN << "B: hit point: " << BLACK << B.get_hit_points() << std::endl;
	std::cout << CYAN << "B: energy point: " << BLACK << B.get_energy_points() << std::endl;
	return (0);
}
