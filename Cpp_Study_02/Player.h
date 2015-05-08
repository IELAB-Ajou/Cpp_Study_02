//
//  Player.h
//  Cpp_Study_02
//
//  Created by ssas on 2015. 5. 8..
//  Copyright (c) 2015년 ShockRabbit. All rights reserved.
//

#ifndef __Cpp_Study_02__Player__
#define __Cpp_Study_02__Player__

#include "Point.h"

class Player
{
    // position, damage, hp
private:
    Point   cPosition_;
    int     iDamage_;
    int     iHp_;
    
public:
    void SetPosition(int iX, int iY);
    int GetDamage();
    
    void SetDamage(int iDmg);
    void SetHp(int iHp);
    
    void PrintPlayerInfo();
    
};

#endif /* defined(__Cpp_Study_02__Player__) */
