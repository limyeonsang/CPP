#include <iostream>

using namespace std;

namespace space1 {
    int sth1(int a, int b) {
        return a + b;
    }
}

namespace space2 {
    namespace innerSpace {
        int func() {
            cout << "function" << endl;
        }

    }
    int sth2(int a, int b) {
        return a / b;
    }
}

int sth3(int a, int b) { 
    return a * b;
}

int main() {
    // cout << space1::sth1(4, 2) << endl;
    using namespace space1;
    cout << sth1(4,2) << endl;

    cout << space2::sth2(4 , 2) << endl;    
    // space2::innerSpace::func();
    using namespace space2::innerSpace;
    cout << func() << endl;

    cout << sth3(4, 2) << endl; 

    return 0;
}