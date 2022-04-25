//
//  Ship_C.cpp
//  CruiseShipEample
//
//  Created by Catlynne Quarles on 4/23/22.
//

#include "Ship_C.hpp"


 Ship_C::Ship_C()
{
     name = "";
     dateBuilt = 0;
 }

Ship_C::Ship_C (string nm, int dateB)
{
    name = nm;
    dateBuilt = dateB;
}

void Ship_C::Set_ShipName(string nm)
{
    name = nm;
}

void Ship_C::Set_BuildDate(int dateB)
{
    dateBuilt = dateB;
}

string Ship_C::Get_ShipName() const
{
    return name;
}

int Ship_C::Get_BuildDate() const
{
    return dateBuilt;
}
void Ship_C::Display_Data()
{
    cout << "Ship Name: " << name << endl;
    cout << "Date built: " << dateBuilt << endl;
}


