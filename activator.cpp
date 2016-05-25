/*
 *filename      :activator.cpp
 *Author        :Russell Powell
 *Definition    :Create a new megaweapon
 *
 */
 
#include "activator.h"

unsigned int Activator::getPrime (unsigned int whichPrime)
{
    
} 
   
unsigned int Activator::sumTheDigits (unsigned int value)
{
    
	if (value > 9)
	{
	    return value%10 + sumTheDigits(value/10);
	}
	else
	{
	    return value;
	}

}