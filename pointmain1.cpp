#include "point.h"
#include <math.h>
namespace my_point_h {
    Point::Point(double init_x, double init_y){
        x = init_x;
        y = init_y;
    }

    double Point::get_x() const {
        return x;
    }

    double Point::get_y() const {
        return y;
    }

    double Point::distance(Point p) {
        double new_x = (abs(x - p.x));
        double new_y = (abs(y - p.y));
        double dist =(sqrt(new_x * new_x + new_y * new_y));
        return dist;

    }

}