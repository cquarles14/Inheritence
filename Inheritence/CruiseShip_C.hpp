//
//  CruiseShip_C.hpp
//  CruiseShipEample
//
//  Created by Catlynne Quarles on 4/24/22.
//

#ifndef CruiseShip_C_hpp
#define CruiseShip_C_hpp
#include "Ship_C.hpp"

#include <stdio.h>

class CruiseShip_C : public Ship_C
{
private:
    int maxPassengers;
    static int totalPassengers;
public:
    CruiseShip_C();
    CruiseShip_C(int);
    CruiseShip_C(int, string, int);
    
    void Set_MaxPassengers(int);
    
    int Get_MaxPassengers() const;
    int Get_TotalPassengers() const;
    
    virtual void Display_Data();
};

#endif /* CruiseShip_C_hpp */
