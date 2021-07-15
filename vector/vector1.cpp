#include <iostream>
#include <vector>
using namespace std;

int main() { 
    vector<int> array1 = {1,2,3,4,5};
    cout << array1.size() << endl;

    vector<int> array2 {1,2,3,};
    cout << array2.size() << endl;
    for(auto itr : array1) { cout << itr << " "; }
    cout << endl;
    

    return 0;
}