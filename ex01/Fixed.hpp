/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:39:49 by sgarigli          #+#    #+#             */
/*   Updated: 2024/05/16 10:40:41 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &src);
		Fixed &operator=(const Fixed &rhs);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int _value;
		static const int _bits = 8;
};

#endif