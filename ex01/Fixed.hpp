/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:39:49 by sgarigli          #+#    #+#             */
/*   Updated: 2024/06/18 09:11:15 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &src);
		Fixed &operator=(const Fixed &rhs);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed(const int value);
		Fixed(const float value);
		float toFloat(void) const;
		int toInt(void) const;
	private:
		int _value;
		static const int _bits = 8;
};

std::ostream& operator<<(std::ostream& o, Fixed const & rhs);
#endif