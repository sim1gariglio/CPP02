/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:41:06 by sgarigli          #+#    #+#             */
/*   Updated: 2024/06/18 09:38:43 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

std::ostream& operator<<(std::ostream& o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = value << Fixed::_bits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(value * (1 << Fixed::_bits));
}

float Fixed::toFloat(void) const
{
	return ((float)this->_value / (1 << Fixed::_bits));
}

int Fixed::toInt(void) const
{
	return (this->_value >> Fixed::_bits);
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

bool Fixed::operator>(const Fixed &rhs) const
{
	return this->toFloat() > rhs.toFloat();
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return this->toFloat() < rhs.toFloat();
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return this->toFloat() >= rhs.toFloat();
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return this->toFloat() <= rhs.toFloat();
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return this->toFloat() == rhs.toFloat();
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return this->toFloat() != rhs.toFloat();
}

Fixed Fixed::operator++(int) //postfix
{
	Fixed tmp(*this);
	this->_value++;
	return tmp;
}

Fixed &Fixed::operator++() //prefix
{
	this->_value++;
	return *this;
}

Fixed Fixed::operator--(int) //postfix
{
	Fixed tmp(*this);
	this->_value--;
	return tmp;
}

Fixed &Fixed::operator--() //prefix
{
	this->_value--;
	return *this;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b) ? a : b;
}