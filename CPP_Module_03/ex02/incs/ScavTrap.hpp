/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 05:33:11 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/04 06:26:58 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "./ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& scavtrap);
	ScavTrap& operator=(const ScavTrap& scavtrap);
	~ScavTrap();

	bool		get_gate_keeper(void);
	void		attack(const std::string &target);
	void		guardGate(void);
private:
	ScavTrap();

	bool		_gate_keeper;
};

#endif
