//
//  Player.cpp
//  Cpp_Study_02
//
//  Created by ssas on 2015. 5. 8..
//  Copyright (c) 2015년 ShockRabbit. All rights reserved.
//

#include "Player.h"

void Player::SetPosition(int iX, int iY)
{
    cPosition_.iX_ = iX;
    cPosition_.iY_ = iY;
}

int Player::GetDamage()
{
    return iDamage_;
}

void Player::SetDamage(int iDmg)
{
    iDamage_ = iDmg;
}

void Player::SetHp(int iHp)
{
    iHp_ = iHp;
}

void Player::PrintPlayerInfo()
{
    cout<<"Player Info : pos_"<<cPosition_.GetPointByStr()
        <<"/ dmg: "<<iDamage_
        <<"/ Hp: "<<iHp_<<endl;
}