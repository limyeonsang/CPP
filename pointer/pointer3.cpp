// adress move

#include <iostream>
using namespace std;

int main() {
    short sh = 10;
    short* psh = &sh;
    int i = 100;
    int *pi = &i;
    double d = 3.14;
    double *pd = &d;

    cout << psh << endl;
    cout << pi << endl;
    cout << pd << endl;


    cout << psh+1 << endl; // 2byte increase
    cout << pi+1 << endl; // 4byte increase
    cout << pd+1 << endl; // 8byte increase

    return 0;
}