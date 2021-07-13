// basic dynamic memory allocation
// heap borrow memory

#include <iostream>
using namespace std;

int main() {
    int* mem = new int; // 4byte 
    *mem = 10;
    cout << *mem << endl;

    int* amem = new int[10]; // 4*10 byte by array form
    for(int i=0;i<10;i++) {
        *(amem+i) = i;
        cout << *(amem+i) << ' ';
    }
    cout << endl;

    delete[] amem;

    return 0;
}