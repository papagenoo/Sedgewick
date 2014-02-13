//
//  point.cpp
//  Sedgewick
//
//  Created by Max Boytsov on 08/02/14.
//  Copyright (c) 2014 Max Boytsov. All rights reserved.
//

#include "point.h"
#include <math.h>

/*float distance1(point a, point b) {
    float dx = a.x - b.x, dy = a.y - b.y;
    return sqrt(dx*dx + dy*dy);
}*/
//using namespace std;


float distance(point a, point b)
{
    float dx = a.x - b.x, dy = a.y - b.y;
    return sqrt(dx*dx + dy*dy);
}