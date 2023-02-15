#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>
class Fixed
{
    int	fixed_point_value;
    static const int number_of_fractional_bits = 8;
    public:
    	Fixed( void );
    	Fixed( const Fixed &obj );
    	~Fixed( void );
    	Fixed	&operator=( const Fixed &obj );

    	int		getRawBits( void ) const;
    	void	setRawBits( const int raw );


		Fixed(const int i);
		Fixed(const float f);
		float toFloat( void ) const;
		int toInt( void ) const;
};
std::ostream	&operator<<( std::ostream &out, const Fixed &obj );
#endif