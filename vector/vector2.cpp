#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> v = { 1, 2, 3, 4 };

    for_each(v.begin(), v.end(), [&](int& n){
        cout << n << endl;       
    });

    for_each(v.rbegin(), v.rend(), [&](int& n) {
        cout << n << endl;       
    });


    vector<int>::iterator itor = v.begin();

    for (; itor != v.end(); itor++)
        cout << *itor << endl;       


    vector<int>::reverse_iterator itor2 = v.rbegin();

    for (; itor2 != v.rend(); itor2++)
        cout << *itor2 << endl;      

    return 0;
}