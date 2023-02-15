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

		bool	operator>( const Fixed &obj ) const ;
		bool	operator<( const Fixed &obj ) const ;
		bool	operator>=( const Fixed &obj ) const ;
		bool	operator<=( const Fixed &obj ) const ;
		bool	operator==( const Fixed &obj ) const ;
		bool	operator!=( const Fixed &obj ) const ;
		Fixed	operator+( const Fixed &obj ) const ;
		Fixed	operator-( const Fixed &obj ) const ;
		Fixed	operator*( const Fixed &obj ) const ;
		Fixed	operator/( const Fixed &obj ) const ;
		Fixed	&operator++( void );
		Fixed	operator++( int );
		Fixed	&operator--( void );
		Fixed	operator--( int );

		static Fixed		&min( Fixed &obj1, Fixed &obj2 );
		static const Fixed	&min( const Fixed &obj1, const Fixed &obj2 );
		static Fixed		&max( Fixed &obj1, Fixed &obj2 );
		static const Fixed	&max( const Fixed &obj1, const Fixed &obj2 );
};
std::ostream	&operator<<( std::ostream &out, const Fixed &obj );
#endif