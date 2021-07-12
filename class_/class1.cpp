// class basic

#include <iostream>
using namespace std;

class Calculator {
public:
    int xNum;
    int yNum;

    int add() {
        return xNum + yNum;
    }
};

int main() {
    Calculator cal;

    cal.xNum = 10;
    cal.yNum = 20;
    cout << cal.add() << endl; 

    Calculator cal1;
    cal1.xNum = 100;
    cal1.yNum = 200;
    cout << cal1.add() << endl;

    return 0;
}
