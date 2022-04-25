//
//  CruiseShip_C.cpp
//  CruiseShipEample
//
//  Created by Catlynne Quarles on 4/24/22.
//

#include "CruiseShip_C.hpp"

int CruiseShip_C::totalPassengers = 0;

CruiseShip_C::CruiseShip_C() : Ship_C()
{
    maxPassengers = 0;
}

CruiseShip_C::CruiseShip_C(int maxPass) : Ship_C()
{
    maxPassengers = maxPass;
    totalPassengers += maxPassengers;
}

CruiseShip_C::CruiseShip_C(int maxPass, string shipName, int dateB) : Ship_C(shipName, dateB)
{
    maxPassengers = maxPass;
    totalPassengers += maxPassengers;
}

int CruiseShip_C::Get_MaxPassengers() const
{
    return maxPassengers;
}
void CruiseShip_C::Set_MaxPassengers(int maxPass)
{
    maxPassengers = maxPass;
}
int CruiseShip_C:: Get_TotalPassengers() const
{
    return totalPassengers;
}
void CruiseShip_C::Display_Data()
{
    cout << "Cruise ship name: " << Get_ShipName() << endl;
    cout << "Cruise ship date built: " << dateBuilt << endl;
    cout << "Max passengers: " << maxPassengers << endl;
}
