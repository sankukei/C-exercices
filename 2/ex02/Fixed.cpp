#include "includes.hpp"

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = n << _bits;
}

Fixed::Fixed(float const f)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = roundf(f * (1 << _bits));
}

float	Fixed::toFloat(void) const {
	return (float)this->_value / (1 << _bits);
}

int	Fixed::toInt(void) const {
	return this->_value >> _bits;
}

std::ostream & operator<<(std::ostream &flux, Fixed const &i)
{
	flux << i.toFloat();
	return flux;
}

int	Fixed::operator>(const Fixed &bit) const {
	if (this->getRawBits() > bit.getRawBits())
		return (1);
	else
		return (0);
}

int	Fixed::operator<(const Fixed &bit) const {
	if (this->getRawBits() < bit.getRawBits())
		return (1);
	else
		return (0);
}

int	Fixed::operator>=(const Fixed &bit) const {
	if (this->getRawBits() >= bit.getRawBits())
		return (1);
	else
		return (0);
}

int	Fixed::operator<=(const Fixed &bit) const {
	if (this->getRawBits() <= bit.getRawBits())
		return (1);
	else
		return (0);
}

int	Fixed::operator==(const Fixed &bit) const {
	if (this->getRawBits() == bit.getRawBits())
		return (1);
	else
		return (0);
}

int	Fixed::operator!=(const Fixed &bit) const {
	if (this->getRawBits() != bit.getRawBits())
		return (1);
	else
		return (0);
}

Fixed	Fixed::operator+(const Fixed &i) const {
	Fixed	res;
	res.setRawBits(this->getRawBits() + i.getRawBits());
	return (res);
}

Fixed	Fixed::operator-(const Fixed &i) const {
	Fixed	res;
	res.setRawBits(this->getRawBits() - i.getRawBits());
	return (res);
}

Fixed	Fixed::operator*(const Fixed &i) const {
	Fixed	res;
	long	tmp;

	tmp = (long)this->getRawBits() * (long)i.getRawBits();
	res.setRawBits((int)(tmp >> _bits));
	return (res);
}

Fixed	Fixed::operator/(const Fixed &i) const {
	Fixed	res;
	long	tmp;

	tmp = (long)this->getRawBits() << _bits; 
	res.setRawBits((int)(tmp / i.getRawBits()));
	return (res);
}

Fixed&	Fixed::operator++() {
	this->_value++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed	tmp(*this);
	this->_value++;
	return tmp;
}

Fixed& Fixed::min(Fixed &n1, Fixed &n2)
{
	if (n1 < n2)
		return n1;
	else
		return n2;
}

const Fixed& Fixed::min(const Fixed &n1, const Fixed &n2)
{
	if (n1 < n2)
		return n1;
	else
		return n2;
}

Fixed& Fixed::max(Fixed &n1, Fixed &n2)
{
	if (n1 < n2)
		return n2;
	else
		return n1;
}

const Fixed& Fixed::max(const Fixed &n1, const Fixed &n2)
{
	if (n1 < n2)
		return n2;
	else
		return n1;
}
