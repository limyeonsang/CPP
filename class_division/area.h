#include <iostream>
using namespace std;

class Area {
public:
    double width;
    double height;

    Area(double w, double h) {
        width = w;
        height = h;
    }

    double calArea();
};
