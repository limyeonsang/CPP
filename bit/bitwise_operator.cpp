#include <iostream>
#include <bitset>

using namespace std;

int main() {
    unsigned int a = 1;
    cout << bitset<4>(a) << " " << a << endl;
    cout << bitset<8>(~a) << " " << (~a) << endl;
    cout << endl;

    cout << bitset<8>(a<<1) << " " << (a<<1) << endl;
    cout << bitset<8>(a<<2) << " " << (a<<2) << endl;
    cout << bitset<8>(a<<3) << " " << (a<<3) << endl;
    cout << endl;

    unsigned int b = 8;
    cout << bitset<4>(b) << " " << b << endl;  
    cout << bitset<4>(b>>1) << " " << (b>>1) << endl;
    cout << bitset<4>(b>>2) << " " << (b>>2) << endl;
    cout << bitset<4>(b>>3) << " " << (b>>3) << endl;
    cout << endl;
    
    a = 0b1100;
    b = 0b0110;
    cout << bitset<4>(a&b) << endl;
    cout << bitset<4>(a|b) << endl;
    cout << bitset<4>(a^b) << endl;

    return 0;
}