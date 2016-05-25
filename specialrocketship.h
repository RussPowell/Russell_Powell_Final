/*
 *filename      :SpecialRocketShip.h
 *Author        :Russell Powell
 *Definition    :Create a new upgraded Rocketship
 *
 */
 
#ifndef SPECIALROCKETSHIP_H
#define SPECIALROCKETSHIP_H

#include "rocketship.h"

class SpecialRocketShip : public RocketShip
{
    private:
        bool cloaked;
        
    public:
        SpecialRocketShip();
        
        void setCloaked(bool cloak);
        bool getCloaked()const; 
        
};
#endif