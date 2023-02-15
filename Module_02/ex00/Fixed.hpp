#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
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
};

#endif