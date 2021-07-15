#include <iostream>
#include <algorithm>
using namespace std;

#define MAX(a,b) (((a)>(b)) ? (a):(b))

#define CHK 

int main() {
    cout << MAX(1+3, 2) << endl; 
    cout << max(1+3, 2) << endl; // algorithm's built in func

#ifdef CHK
    cout << "checked" << endl;
#endif

#ifndef CHK
    cout << "check plz" << endl;
#endif

// same with above
// #ifdef CHK
//     cout << "checked" << endl;
// #else
//     cout << "check plz" << endl;
// #endif


    return 0;
}