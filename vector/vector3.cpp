// end() cend() rend() crend()

// vector.end(): returrn last-next iterator
// vector.cend(): return last-next iterator(conts type)
// vector.rend(): return the previous iterator iterator 
// vector.crend(): return the previous iterator(const type)

#include<vector>
#include<iostream>
using namespace std;

void print(vector<int> Target_Vector) {
    for (auto i : Target_Vector)
        cout << i << " ";
    cout << endl;
}
 
int main() {
    vector<int> Vector = { 2,3,4,1,3,5 };
    print(Vector);
 
    cout << *(--Vector.end()) << endl;
    cout << *(--Vector.cend()) << endl;
    cout << *(--Vector.rend()) << endl;
    cout << *(--Vector.crend()) << endl;
}
