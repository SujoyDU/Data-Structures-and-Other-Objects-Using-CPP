#include <iostream>
#include "point.h"
using namespace std;
using namespace my_point_h;

int main() {
    Point p1 = Point(1.0,1.0);
    Point p2 = Point(2.0,1.0);
    double dist = p1.distance(p2);
    std::cout << dist <<endl;
    return EXIT_SUCCESS;
}