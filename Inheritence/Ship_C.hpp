//
//  Ship_C.hpp
//  CruiseShipEample
//
//  Created by Catlynne Quarles on 4/23/22.
//

#ifndef Ship_C_hpp
#define Ship_C_hpp

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class Ship_C
{
private:
    string name;
protected:
    int dateBuilt;
public:
    Ship_C();
    Ship_C(string, int);
    
    void Set_ShipName(string);
    void Set_BuildDate(int);
    
    string Get_ShipName() const;
    int Get_BuildDate() const;
    
    virtual void Display_Data();
    
};
#endif /* Ship_C_hpp */
