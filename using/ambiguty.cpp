#include <iostream>
using namespace std;

namespace ns1 {
    int same(10);
    int cout(20);
}

namespace ns2 {
    int same(30);
}

int main() {
    {
        // using namespace ns1;
        cout << ns1::same << endl;
        cout << ns1::cout << endl;
    }
    {
        using namespace ns2;
        std::cout << same << endl;
    }
    

    return 0;
}