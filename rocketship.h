/*
 *filename      :RocketShip.h
 *Author        :Russell Powell
 *Definition    :Create a new Rocketship
 *
 */
 
#ifndef ROCKETSHIP_H
#define ROCKETSHIP_H

#include <vector>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <fstream>
#include <istream>
using std::ifstream;
using std::ofstream;
using namespace std;



class RocketShip
{
    private:
        // vector<unsigned int>fuelCells;
        
    public:
                // function interface
                // default constructor (initial values "RS NullPointer", 1000)
        RocketShip();
        RocketShip(string newName, unsigned int newFuel);
        string getName() const;
        void setName(string);
        unsigned int getFuel() const;
        void setFuel(unsigned int);
                // new public data members
        // void addFuelCell(unsigned int fuelAmount);
        // bool removeFuelCell(unsigned int cellNumber);
        // bool addFuelToCell(unsigned int cellNumber, unsigned int fuelAmount);
        // string burnFuel(unsigned int cellNumber);
        
    protected:
        string name;
        unsigned int fuel;
};
#endif  //END OF CLASS