#include <iostream>
#include <functional>
#include <string>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

class CIsOdd
{
public:
    bool operator()(int i)
    {
        return ((i%2) == 1);
    }
};
 
// without Lambda 
// int main(int argc, char** argv)
// {
//     vector<int> v = {10, 25, 40, 55};
 
//     CIsOdd objIsOdd;
 
//     auto it = find_if(v.cbegin(), v.cend(), objIsOdd);
 
//     cout << "[Using Functor] : The first odd value is " << *it << endl;
 
//     return 0;
// }
 
// Using Lambda 
int main(int argc, char** argv)
{
    vector<int> v = {10, 25, 40, 55};
 
    //find_if: find the object with loop stl
    auto it2 = find_if(v.cbegin(), v.cend(), [](int i) -> bool {
        return (i%2) == 1;
    });
 
    cout << "[Using Lambda] : The first odd value is " << *it2 << std::endl;
 
    return 0;
}


