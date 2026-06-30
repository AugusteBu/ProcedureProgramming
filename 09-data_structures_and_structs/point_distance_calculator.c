#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
typedef struct Point
{
    double x, y;
} Point;
void printPoint(Point p)
{
    printf("(%.1lf, %.1lf)\n",p);
}
Point createPoint(double x, double y)
{
    Point coordinates = {x, y};
    return coordinates;
}
double getDistance(Point a, Point b)
{
double distance = sqrt ( pow((b.x-a.x), 2) + pow((b.y-a.y), 2));
    return distance;
}
int main()
{
   double distance = getDistance(createPoint(2.0, -3.0), createPoint(-4.0, 5.0));
   printf("%lf", distance);
    return 0;
}
