// pointer in array

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    cout << arr << endl;
    cout << arr+0 << endl;
    cout << arr+1 << endl;
    cout << arr+2 << endl << endl;

    int* pArr = arr;
    cout << pArr << endl;
    cout << pArr+0 << endl;  
    cout << pArr+1 << endl;  
    cout << pArr+2 << endl;  

    return 0;
}