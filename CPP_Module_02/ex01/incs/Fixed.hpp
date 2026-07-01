/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 18:44:18 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/01 18:45:31 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
public:
	Fixed();
	Fixed(const int i);
	Fixed(const float f);
	Fixed(const Fixed& fixed);
	Fixed& operator=(const Fixed& fixed);
	~Fixed();

	int		getRawBits(void) const;
	void		setRawBits(int const raw);

	float		toFloat(void) const;
	int		toInt(void) const;
	
private:
	int			_value;
	static const int	_bits = 8;

};

std::ostream&	operator<<(std::ostream &ostream, Fixed const &fixed);

#endif
