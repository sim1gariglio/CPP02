/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:44:53 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/13 09:24:50 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a = 0;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	
	std::cout << "a is "<< a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << "a is "<< a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << "a is "<< a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;	

	return 0;
}