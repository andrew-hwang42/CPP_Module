/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 04:11:03 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/04 06:06:05 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ClapTrap.hpp"

ClapTrap::ClapTrap(): _name(""), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << YELLOW <<
		"ClapTrap: Default constructor called" << BLACK << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name),
			_hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << YELLOW << "ClapTrap: "
		<< this->_name << ": String constructor called" << BLACK << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
{
	std::cout << YELLOW << "ClapTrap: "
		<< this->_name << ": Copy constructor called" << BLACK << std::endl;
	*this = claptrap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap)
{
	std::cout << YELLOW << "ClapTrap: "
		<< this->_name << ": Copy assignment operator called" << BLACK << std::endl;
	if (this == &claptrap)
		return (*this);
	this->_name = claptrap._name;
	this->_hit_points = claptrap._hit_points;
	this->_energy_points = claptrap._energy_points;
	this->_attack_damage = claptrap._attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << YELLOW << "ClapTrap: "
		<< this->_name << ": Destructor called" << BLACK << std::endl;
}

std::string	ClapTrap::get_name(void) const
{
	return (_name);
}

int	ClapTrap::get_hit_points(void) const
{
	return (_hit_points);
}

int	ClapTrap::get_energy_points(void) const
{
	return (_energy_points);
}

int	ClapTrap::get_attack_damage(void) const
{
	return (_attack_damage);
}

void	ClapTrap::set_name(std::string name)
{
	this->_name = name;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << this->_name
			<< " attacks " << target << ", causing "
			<< this->_attack_damage << " points of damage!" << std::endl;
		_energy_points--;
	}
	else if (_energy_points <= 0)
		std::cout << this->_name << " cannot attack " << target
			<< ", no energy point left" << std::endl;
	else if (_hit_points <= 0)
		std::cout << this->_name << " cannot attack " << target
			<< ", no hit point left" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " takes "
		<< amount << " points of damage" << std::endl;
	_hit_points -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << this->_name << " repaired " << amount
			<< " points of hit points" << std::endl;
		_hit_points += amount;
		_energy_points--;
	}
	else if (_energy_points <= 0 )
		std::cout << this->_name << " cannot be repaired"
			<< ", no energy point left" << std::endl;
	else if (_hit_points <= 0)
		std::cout << this->_name << " cannot be repaired"
			<< ", no hit points left" << std::endl;
}
