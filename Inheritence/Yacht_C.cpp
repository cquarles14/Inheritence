//
//  Yacht_C.cpp
//  CruiseShipEample
//
//  Created by Catlynne Quarles on 4/24/22.
//

#include "Yacht_C.hpp"
#include "CruiseShip_C.hpp"

Yacht_C::Yacht_C() : CruiseShip_C()
{
    crewCapacity = 0;
}
Yacht_C::Yacht_C(int crewCap, int maxPass, string shipName, int dateB) : CruiseShip_C(maxPass, shipName, dateB)
{
    crewCapacity = crewCap;
}

void Yacht_C::Set_CrewCapacity(int crewCap)
{
    crewCapacity = crewCap;
}

int Yacht_C::Get_CrewCapacity() const
{
    return crewCapacity;
}
void Yacht_C::Display_Data()
{
    cout << "Yacht name: " << Get_ShipName() << endl;
    cout << "Yacht build date: " << dateBuilt << endl;
    cout << "Yacht max passengers: " << Get_MaxPassengers() << endl;
    cout << "Yacht crew capacity: " << crewCapacity << endl;
}
