#include"iter.hpp"
#include<iostream>

// class Awesome
// {
// public:
// Awesome( void ) : _n( 42 ) { return; }
// int get( void ) const { return this->_n; }
// private:
// int _n;
// };
// std::ostream & operator<<( std::ostream & out, Awesome const & rhs ) { out << rhs.get();
//  return out; }
template<typename T>
void print( T const & x ) 
{
    std::cout << x << std::endl;
    return;
}

int main(void)
{
    int tab[] = { 0, 1, 2, 3, 4 };
    //Awesome tab2[5];

    iter(tab, 5, print);
    //iter(tab2, 5, &print);
}