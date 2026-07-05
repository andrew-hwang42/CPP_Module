/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 04:11:11 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/04 22:20:00 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ClapTrap.hpp"
#include "../incs/ScavTrap.hpp"
#include "../incs/FragTrap.hpp"

# define CYAN			"\x1b[36m"

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
	{
		std::cout << "Arument error" << std::endl;
		return (1);
	}
	FragTrap FA("frag_A");
	FragTrap FB("frag_B");

	std::cout << std::endl << CYAN << "[test01] Attack: frag_A attacks frag_B"
		<< BLACK << std::endl << std::endl;
	int	hit = 0;
	for (int i = 0; i < 11; i++)
	{
		std::cout << CYAN << "frag_A hits frag_B - " << i + 1 << " times" << BLACK << std::endl;
		hit = FA.get_energy_points();
		FA.attack(FB.get_name());
		if (hit)
			FB.takeDamage(FA.get_attack_damage());
	}
	std::cout << CYAN << "frag_A: hit point: " << BLACK << FA.get_hit_points() << std::endl;
	std::cout << CYAN << "frag_A: energy point: " << BLACK << FA.get_energy_points() << std::endl;
	std::cout << CYAN << "frag_B: hit point: " << BLACK << FB.get_hit_points() << std::endl;
	std::cout << CYAN << "frag_B: energy point: " << BLACK << FB.get_energy_points() << std::endl;

	std::cout << std::endl << CYAN << "[test02] Repair: frag_A and frag_B repair itself"
		<< BLACK << std::endl << std::endl;
	std::cout << CYAN << "frag_A repairs itself" << BLACK << std::endl;
	FA.beRepaired(10);
	std::cout << CYAN << "frag_B repairs itself" << BLACK << std::endl;
	FB.beRepaired(10);

	FragTrap FC("frag_C");
	ScavTrap S("scav");
	ClapTrap C("clap");
	std::cout << std::endl << CYAN << "[test03] Attack: frag_C attacks scav and clap"
		<< BLACK << std::endl << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << CYAN << "frag_C hits scav - " << i + 1 << " times" << BLACK << std::endl;
		hit = FC.get_energy_points();
		FC.attack(S.get_name());
		if (hit)
			S.takeDamage(FC.get_attack_damage());
	}
	for (int i = 0; i < 4; i++)
	{
		std::cout << CYAN << "frag_C hits clap - " << i + 1 << " times" << BLACK << std::endl;
		hit = FC.get_energy_points();
		FC.attack(C.get_name());
		if (hit)
			C.takeDamage(FC.get_attack_damage());
	}
	std::cout << CYAN << "frag_C: hit point: " << BLACK << FC.get_hit_points() << std::endl;
	std::cout << CYAN << "frag_C: energy point: " << BLACK << FC.get_energy_points() << std::endl;
	std::cout << CYAN << "scav: hit point: " << BLACK << S.get_hit_points() << std::endl;
	std::cout << CYAN << "scav: energy point: " << BLACK << S.get_energy_points() << std::endl;
	std::cout << CYAN << "clap: hit point: " << BLACK << C.get_hit_points() << std::endl;
	std::cout << CYAN << "clap: energy point: " << BLACK << C.get_energy_points() << std::endl;

	std::cout << std::endl << CYAN << "[test04] Repair: frag_C repairs itself"
		<< BLACK << std::endl << std::endl;
	for (int i = 0; i < 11; i++)
	{
		std::cout << CYAN << "frag_C repairs itself - " << i + 1 << " times" << BLACK << std::endl;
		FC.beRepaired(10);
	}
	std::cout << CYAN << "frag_C: hit point: " << BLACK << FC.get_hit_points() << std::endl;
	std::cout << CYAN << "frag_C: energy point: " << BLACK << FC.get_energy_points() << std::endl;

	std::cout << std::endl << CYAN << "[test05] high-five request + guard gate"
		<< BLACK << std::endl << std::endl;
	FA.highFivesGuys();
	FA.highFivesGuys();
	FB.highFivesGuys();
	FB.highFivesGuys();
	FC.highFivesGuys();
	FC.highFivesGuys();	
	S.guardGate();
	S.guardGate();
	return (0);
}
