#include <iostream>

int main() {
    using namespace std;

    int16_t i(5); // 2byte
    int8_t isitint = 65; // 1byte, char is better

    cout << isitint << endl;

    int_fast8_t fi(5);
    int_least64_t li(5);
}