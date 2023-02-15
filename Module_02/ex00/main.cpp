#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    a.setRawBits(1);
    Fixed b( a );
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
}