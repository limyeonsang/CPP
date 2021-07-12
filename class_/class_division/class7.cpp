// division member var 

#include <iostream>
#include <string>

#include "./area.h"
using namespace std;


int main() {
    Area area(10.5, 12.5);
    cout << area.calArea() << endl; 

    return 0;
}