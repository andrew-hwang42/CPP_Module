/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 04:11:11 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/04 06:43:24 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ClapTrap.hpp"
#include "../incs/ScavTrap.hpp"

# define CYAN			"\x1b[36m"

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
	{
		std::cout << "Arument error" << std::endl;
		return (1);
	}
	ScavTrap SA("scav_A");
	ScavTrap SB("scav_B");

	std::cout << std::endl << CYAN << "[test01] Attack: scav_A attacks scav_B"
		<< BLACK << std::endl << std::endl;
	int	hit = 0;
	for (int i = 0; i < 11; i++)
	{
		std::cout << CYAN << "scav_A hits scav_B - " << i + 1 << " times" << BLACK << std::endl;
		hit = SA.get_energy_points();
		SA.attack(SB.get_name());
		if (hit)
			SB.takeDamage(SA.get_attack_damage());
	}
	std::cout << CYAN << "scav_A: hit point: " << BLACK << SA.get_hit_points() << std::endl;
	std::cout << CYAN << "scav_A: energy point: " << BLACK << SA.get_energy_points() << std::endl;
	std::cout << CYAN << "scav_B: hit point: " << BLACK << SB.get_hit_points() << std::endl;
	std::cout << CYAN << "scav_B: energy point: " << BLACK << SB.get_energy_points() << std::endl;

	std::cout << std::endl << CYAN << "[test02] Repair: scav_A and scav_B repair itself"
		<< BLACK << std::endl << std::endl;
	std::cout << CYAN << "scav_A repairs itself" << BLACK << std::endl;
		SA.beRepaired(10);
	std::cout << CYAN << "scav_B repairs itself" << BLACK << std::endl;
		SB.beRepaired(10);

	ScavTrap SC("scav_C");
	ClapTrap C("clap");
	std::cout << std::endl << CYAN << "[test03] Attack: scav_C attacks clap"
		<< BLACK << std::endl << std::endl;
	for (int i = 0; i < 9; i++)
	{
		std::cout << CYAN << "scav_C hits clap - " << i + 1 << " times" << BLACK << std::endl;
		hit = SC.get_energy_points();
		SC.attack(C.get_name());
		if (hit)
			C.takeDamage(SC.get_attack_damage());
	}
	std::cout << CYAN << "scav_C: hit point: " << BLACK << SC.get_hit_points() << std::endl;
	std::cout << CYAN << "scav_C: energy point: " << BLACK << SC.get_energy_points() << std::endl;
	std::cout << CYAN << "clap: hit point: " << BLACK << C.get_hit_points() << std::endl;
	std::cout << CYAN << "clap: energy point: " << BLACK << C.get_energy_points() << std::endl;

	std::cout << std::endl << CYAN << "[test04] Repair: scav_C repairs itself"
		<< BLACK << std::endl << std::endl;
	for (int i = 0; i < 6; i++)
	{
		std::cout << CYAN << "scav_C repairs itself - " << i + 1 << " times" << BLACK << std::endl;
		SC.beRepaired(10);
	}
	std::cout << CYAN << "scav_C: hit point: " << BLACK << SC.get_hit_points() << std::endl;
	std::cout << CYAN << "scav_C: energy point: " << BLACK << SC.get_energy_points() << std::endl;

	std::cout << std::endl << CYAN << "[test05] guard gate"
		<< BLACK << std::endl << std::endl;
	SA.guardGate();
	SA.guardGate();
	SB.guardGate();
	SB.guardGate();
	SC.guardGate();
	SC.guardGate();
	return (0);
}
