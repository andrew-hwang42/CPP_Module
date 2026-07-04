/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 06:22:29 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/04 06:44:37 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << YELLOW <<
		"FragTrap: Default constructor called" << BLACK << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << YELLOW << "FragTrap: "
		<< this->_name << " String constructor called" << BLACK << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& fragtrap): ClapTrap(fragtrap)
{
	std::cout << YELLOW << "FragTrap: "
		<< this->_name << " Copy constructor called" << BLACK << std::endl;
	this->_name = fragtrap.get_name();
	this->_hit_points = fragtrap._hit_points;
	this->_energy_points = fragtrap._energy_points;
	this->_attack_damage = fragtrap._attack_damage;
}

FragTrap& FragTrap::operator=(const FragTrap& fragtrap)
{
	std::cout << YELLOW << "FragTrap: "
		<< this->_name << " Copy assignment operator called" << BLACK << std::endl;
	if (this == &fragtrap)
		return (*this);
	this->_name = fragtrap._name;
	this->_hit_points = fragtrap._hit_points;
	this->_energy_points = fragtrap._energy_points;
	this->_attack_damage = fragtrap._attack_damage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << YELLOW << "FragTrap: "
		<< this->_name << " Destructor called" << BLACK << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (_energy_points >= 10 && _hit_points > 0)
	{
		std::cout << "FragTrap: " << this->_name
			<< " attacks " << target << ", causing "
			<< this->_attack_damage << " points of damage!" << std::endl;
		_energy_points -= 10;
	}
	else if (_energy_points < 10)
		std::cout << "FragTrap: " << this->_name << " cannot attack " << target
			<< ", not enough energy points" << std::endl;
	else if (_hit_points <= 0)
		std::cout << "FragTrap: " << this->_name << " cannot attack " << target
			<< ", not enough hit points" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap: " << this->_name
		<< " requested high-fives !" << std::endl;
}
