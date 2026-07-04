/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 04:10:55 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/04 05:41:42 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <string>
#include <iostream>

# define YELLOW			"\x1b[33m"
# define BLACK			"\x1b[0m"

class	ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& claptrap);
	ClapTrap& operator=(const ClapTrap& claptrap);
	~ClapTrap();

	std::string	get_name(void) const;
	int		get_hit_points(void) const;
	int		get_energy_points(void) const;
	int		get_attack_damage(void) const;
	void		set_name(std::string name);

	void		attack(const std::string &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	
private:
	std::string	_name;
	int		_hit_points;
	int		_energy_points;
	int		_attack_damage;

};

#endif
