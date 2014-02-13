#include "point.h"
#include <math.h>

float Sedgewick::distance(Point a, Point b)
{
    float dx = a.x - b.x, dy = a.y - b.y;
    return sqrt(dx*dx + dy*dy);
}
