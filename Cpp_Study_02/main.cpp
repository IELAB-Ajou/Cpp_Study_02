//
//  main.cpp
//  Cpp_Study_02
//
//  Created by ssas on 2015. 5. 8..
//  Copyright (c) 2015년 ShockRabbit. All rights reserved.
//

#include "Player.h"

int main(int argc, const char * argv[]) {
    Player* pPlayer = new Player;
    pPlayer->SetPosition(17, 17);
    pPlayer->SetDamage(27);
    pPlayer->SetHp(77);
    
    pPlayer->PrintPlayerInfo();
    
    
    return 0;
}
