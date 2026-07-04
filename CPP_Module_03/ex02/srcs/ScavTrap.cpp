/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 05:33:22 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/04 06:29:03 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ScavTrap.hpp"

ScavTrap::ScavTrap(): _gate_keeper(false)
{
	std::cout << YELLOW <<
		"ScavTrap: Default constructor called" << BLACK << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name), _gate_keeper(false)
{
	std::cout << YELLOW << "ScavTrap: "
		<< this->_name << " String constructor called" << BLACK << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap): ClapTrap(scavtrap)
{
	std::cout << YELLOW << "ScavTrap: "
		<< this->_name << " Copy constructor called" << BLACK << std::endl;
	this->_name = scavtrap.get_name();
	this->_hit_points = scavtrap._hit_points;
	this->_energy_points = scavtrap._energy_points;
	this->_attack_damage = scavtrap._attack_damage;
	this->_gate_keeper = scavtrap._gate_keeper;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavtrap)
{
	std::cout << YELLOW << "ScavTrap: "
		<< this->_name << " Copy assignment operator called" << BLACK << std::endl;
	if (this == &scavtrap)
		return (*this);
	this->_name = scavtrap._name;
	this->_hit_points = scavtrap._hit_points;
	this->_energy_points = scavtrap._energy_points;
	this->_attack_damage = scavtrap._attack_damage;
	this->_gate_keeper = scavtrap._gate_keeper;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << YELLOW << "ScavTrap: "
		<< this->_name << " Destructor called" << BLACK << std::endl;
}

bool	ScavTrap::get_gate_keeper(void)
{
	return(_gate_keeper);
}

void	ScavTrap::attack(const std::string &target)
{
	if (_energy_points >= 5 && _hit_points > 0)
	{
		std::cout << "ScavTrap: " << this->_name
			<< " attacks " << target << ", causing "
			<< this->_attack_damage << " points of damage!" << std::endl;
		_energy_points -= 5;
	}
	else if (_energy_points < 5)
		std::cout << "ScavTrap: " << this->_name << " cannot attack " << target
			<< ", not enough energy points" << std::endl;
	else if (_hit_points <= 0)
		std::cout << "ScavTrap: " << this->_name << " cannot attack " << target
			<< ", not enough hit points" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (get_gate_keeper() == false)
	{
		std::cout << "ScavTrap: " << this->_name
			<< " is in gate keeper mode" << std::endl;
		_gate_keeper = true;
		
	}
	else
		std::cout << "ScavTrap: " << this->_name
			<< " is already in gate keeper mode" << std::endl;
}
