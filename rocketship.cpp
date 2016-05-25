/*
 *filename      :RocketShip.cpp
 *Author        :Russell Powell
 *Definition    :Define a new RocketRocketShip
 *
 */
#include "rocketship.h"
RocketShip::RocketShip()
{
    name = "RS NullPointer";
    fuel = 1000;
}

RocketShip::RocketShip(string newName, unsigned int newFuel)
{
    name = newName;
    fuel = newFuel;
}


string RocketShip::getName()const
{
    return name;    
}

void RocketShip::setName(string newName)
{
    name = newName;
}

unsigned int RocketShip::getFuel() const
{
    return fuel;
}

void RocketShip::setFuel(unsigned int newFuel)
{
    fuel = newFuel;
}

    // void RocketShip::addFuelCell(unsigned int fuelAmount)
    // {
    //     fuelCells.push_back(fuelAmount);
    // }
    //             // -- add a new element to fuelCells to contain fuelAmount --

    // bool RocketShip::removeFuelCell(unsigned int cellNumber)
    // {
         
    //     if (cellNumber < fuelCells.size())
    //     {
    //         fuelCells.erase(fuelCells.begin() + cellNumber);
    //         return true;
    //     }
    //     else
    //     {
    //         return false;
    //     }
    // }
    //             // -- removes the specified cell (0-indexed) from fuelCells --

    // bool RocketShip::addFuelToCell(unsigned int cellNumber, unsigned int fuelAmount)
    // {
    //     if (cellNumber >= fuelCells.size())
    //     {
    //         return false;
    //     }
    //     {
    //         fuelCells[cellNumber] += fuelAmount;
    //         return true;
    //     }
    // }    
    //             // -- add fuelAmount to the specified fuelCells (0-indexed) --

    // string RocketShip::burnFuel(unsigned int cellNumber)
    // {
    //     string zero = "";
    //     if (cellNumber < fuelCells.size())
    //     {
    //         unsigned int i;
    //         unsigned int amt = fuelCells[cellNumber];
    //         for(i = 0; i<amt; i++)
    //         {
    //         zero+="*";
    //         }
    //         fuelCells[cellNumber] = 0;
    //         return zero;
    //     }
    //     else
    //     {
    //         return zero;
    //     }
    // }   
    //             // -- zero out/burn all of the fuel in the specified cell (0-indexed) --
    //             // -- returns a string of asterisks representing the fuel in the cell --