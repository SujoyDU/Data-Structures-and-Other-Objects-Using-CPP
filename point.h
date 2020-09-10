#ifndef MY_POINT_H
#define MY_POINT_H

namespace my_point_h {
    class Point {
        public:
            Point();
            Point(double init_x = 0.0, double init_y=0.0);
            double get_x() const;
            double get_y() const;
            double distance(Point p);
        private:
            double x;
            double y;
    };

}
#endif