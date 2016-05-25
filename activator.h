/*
 *filename      :activator.h
 *Author        :Russell Powell
 *Definition    :Create a new megaweapon
 *
 */

#ifndef ACTIVATOR_H
#define ACTIVATOR_H

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <fstream>
#include <istream>

using namespace std;

class Activator
{
    public:
                //    public function interface
        unsigned int getPrime (unsigned int whichPrime);
            // -- return a prime number in the series of primes, --
            // -- first prime is 2, second prime is 3, etc. --

        unsigned int sumTheDigits (unsigned int value);
            // -- return the sum of the digits in a value --
            // -- reduced to a single digit --
            // -- ex: sum of digits in 99 is 9+9=18, 1+8=9, return 9 --
};

#endif