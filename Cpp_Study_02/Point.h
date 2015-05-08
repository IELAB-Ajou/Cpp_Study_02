//
//  Point.h
//  Cpp_Study_02
//
//  Created by ssas on 2015. 5. 8..
//  Copyright (c) 2015년 ShockRabbit. All rights reserved.
//

#ifndef __Cpp_Study_02__Point__
#define __Cpp_Study_02__Point__

#include <iostream>

using namespace std;

class Point
{
public:
    char sTempStr[255];
    
    int iX_;
    int iY_;
    
    const char* GetPointByStr();
    
    /*
private:
    int iX_;
    int iY_;
    
public:
    void SetPosition(int iX, int iY);
    void SetPositionX(int iX);
    void SetPositionY(int iY);
    void SetPosition(Point& pnt);
     */
    
};

#endif /* defined(__Cpp_Study_02__Point__) */
