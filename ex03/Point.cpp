/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 10:13:17 by sgarigli          #+#    #+#             */
/*   Updated: 2024/06/19 10:31:18 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
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