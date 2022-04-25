//
//  Yacht_C.hpp
//  CruiseShipEample
//
//  Created by Catlynne Quarles on 4/24/22.
//

#ifndef Yacht_C_hpp
#define Yacht_C_hpp

#include "CruiseShip_C.hpp"
#include <stdio.h>

class Yacht_C : public CruiseShip_C
{
private:
    int crewCapacity;
public:
    Yacht_C();
    Yacht_C(int, int, string, int);
    
    int Get_CrewCapacity() const;
    void Set_CrewCapacity(int);
    
    virtual void Display_Data();
};


#endif /* Yacht_C_hpp */
