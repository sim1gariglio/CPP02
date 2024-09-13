/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 10:13:17 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/13 09:25:43 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
}

Point::Point(const Point &other) : _x(other.getX()), _y(other.getY())
{
}

Point &Point::operator=(const Point &rhs)
{
	if (this != &rhs)
	{
		this->setX(rhs.getX());
		this->setY(rhs.getY());
	}
	return *this;
}

Point::~Point()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed Point::getX() const
{
	return this->_x;
}

Fixed Point::getY() const
{
	return this->_y;
}

void Point::setX(Fixed const x)
{
	const_cast<Fixed &>(this->_x) = x;
}

void Point::setY(Fixed const y)
{
	const_cast<Fixed &>(this->_y) = y;
}