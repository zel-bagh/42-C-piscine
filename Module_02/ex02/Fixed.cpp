#include "Fixed.hpp"

Fixed::Fixed(void): fixed_point_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(Fixed const & obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}
Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}
Fixed &	Fixed::operator=(Fixed const & obj)
{
	std::cout << "Assignement operator called" << std::endl;
	fixed_point_value = obj.fixed_point_value;
	return *this;
}
int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed_point_value);
}
void	Fixed::setRawBits( const int raw )
{
	std::cout << "setRawBits member function called" << std::endl;
    fixed_point_value = raw;
}


Fixed::Fixed( const int value )
{
	std::cout << "Constant integer constructor called" << std::endl;
	fixed_point_value = value << number_of_fractional_bits;
}

Fixed::Fixed( const float value )
{
	std::cout << "Constant float constructor called" << std::endl;
    fixed_point_value = (roundf(value * (1 << number_of_fractional_bits)));
}
int	Fixed::toInt( void ) const
{
	return (fixed_point_value >> number_of_fractional_bits);
}

float	Fixed::toFloat( void ) const
{
    return ((float)fixed_point_value / (float)(1 << number_of_fractional_bits));
}


std::ostream &	operator<<( std::ostream & out, Fixed const & obj)
{
	out << obj.toFloat();
	return (out);
}

bool	Fixed::operator>( const Fixed &obj ) const 
{
	return (fixed_point_value > obj.fixed_point_value);
}
bool	Fixed::operator<( const Fixed &obj ) const 
{
	return (fixed_point_value < obj.fixed_point_value);
}
bool	Fixed::operator>=( const Fixed &obj ) const 
{
	return (fixed_point_value >= obj.fixed_point_value);
}
bool	Fixed::operator<=( const Fixed &obj ) const
{
	return (fixed_point_value <= obj.fixed_point_value);
}
bool	Fixed::operator==( const Fixed &obj ) const
{
	return (fixed_point_value == obj.fixed_point_value);
}
bool	Fixed::operator!=( const Fixed &obj ) const
{
	return (fixed_point_value != obj.fixed_point_value);
}

Fixed	Fixed::operator+( const Fixed &obj ) const
{
	Fixed t(toFloat() + obj.toFloat());
	return (t);
}

Fixed	Fixed::operator-( const Fixed &obj ) const
{
	Fixed t(toFloat() - obj.toFloat());
	return (t);
}

Fixed	Fixed::operator*( const Fixed &obj ) const
{
	Fixed t(toFloat() * obj.toFloat());
	return (t);
}

Fixed	Fixed::operator/( const Fixed &obj ) const
{
	Fixed t(toFloat() / obj.toFloat());
	return (t);
}

Fixed	&Fixed::operator++( void )
{
	fixed_point_value++;
	return (*this);
}

Fixed	&Fixed::operator--( void )
{
	fixed_point_value--;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed t(*this);
	fixed_point_value++;
	return (t);
}
Fixed	Fixed::operator--( int )
{
	Fixed t(*this);
	fixed_point_value--;
	return (t);
}

Fixed		&Fixed::min( Fixed &obj1, Fixed &obj2 )
{
	if (obj1 <= obj2)
		return (obj1);
	return obj2;
}

const Fixed	&Fixed::min( const Fixed &obj1, const Fixed &obj2 )
{
	if (obj1 <= obj2)
		return (obj1);
	return obj2;
}

Fixed		&Fixed::max( Fixed &obj1, Fixed &obj2 )
{
	if (obj1 >= obj2)
		return (obj1);
	return obj2;
}

const Fixed	&Fixed::max( const Fixed &obj1, const Fixed &obj2 )
{
	if (obj1 >= obj2)
		return (obj1);
	return obj2;
}

