#include <iostream>
#include <vector>
using namespace std;

class A {
public:
    A(initializer_list<int> l) { // initiallize_list: values're input, when call constructor with {}
        for (auto itr = l.begin(); itr != l.end(); ++itr) {
            cout << *itr << endl;
        }
    }
};

int main() {
    int arr[] = {1,2,3,4};
    vector<int> v = {1,2,3,4};

    A a = {1,2,3,4,5};

    return 0;
}