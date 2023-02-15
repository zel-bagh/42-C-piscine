#ifndef HARL__H
#define HARL__H

#include <string>
#include <iostream>

class Harl
{
    public:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    public :
        void complain(std::string level);
};


#endif