/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 01:10:48 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/01 01:11:25 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
public:
	Harl();
	void	complain(std::string level);
	~Harl();

private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};

#endif
