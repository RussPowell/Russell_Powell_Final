/*
 *filename      :SpecialRocketShip.cpp
 *Author        :Russell Powell
 *Definition    :Defines a new upgraded Rocketship
 *
 */
 
#include "specialrocketship.h"

SpecialRocketShip::SpecialRocketShip(): RocketShip()
{
    name = "RS Cloaky";
    fuel = 1000;
    cloaked = false;
}
    
void SpecialRocketShip::setCloaked(bool cloak)
{
    cloaked = cloak;
}

bool SpecialRocketShip::getCloaked()const
{
    return cloaked;
}