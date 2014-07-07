/* moronic/main.cpp */

#include <iostream>

#include "moronic.hpp"

int
main( int argc, char**argv )
{
    std::cout
        << std::endl
        << __PRETTY_FUNCTION__
        << std::endl
        << "moronic::foobar( 42 ) == "
        << std::dec
        << moronic::foobar( 42 )
        << std::endl
        ;
}
