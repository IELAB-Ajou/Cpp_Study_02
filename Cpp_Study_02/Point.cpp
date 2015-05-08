//
//  Point.cpp
//  Cpp_Study_02
//
//  Created by ssas on 2015. 5. 8..
//  Copyright (c) 2015년 ShockRabbit. All rights reserved.
//

#include "Point.h"

const char* Point::GetPointByStr()
{
    // 문자열을 숫자로 넘기고 싶은데 방법을 모르겠네..
    sprintf(sTempStr, "%d, %d", iX_, iY_);
    return sTempStr;
}

/*
void Point::SetPosition(int iX, int iY)
{
    iX_ = iX;
    iY_ = iY;
}

void Point::SetPositionX(int iX)
{
    iX_ = iX;
}

void Point::SetPositionY(int iY)
{
    iY_ = iY;
}

void Point::SetPosition(Point& pnt)
{
    iX_ = pnt.iX_;
    iY_ = pnt.iY_;
}
*/