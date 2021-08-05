#include <iostream>
#include <functional>
#include <string>
#include <vector>
#include <array>
#include <algorithm>
using namespace std; 

int main(int argc, char** argv)
{
    vector<int> v = {1, 2, 3, 4, 5};
 
    cout << "without lambda" << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ' ';
    }
 
    cout << endl;
 
    cout << "using lambda" << endl;
    for_each(v.begin(), v.end(), [](int val)               // [] 부분 람다 함수의 시작점을 알리는 부분
    {                                                           //
        cout << val << ' ';                          //  대괄호 사이가 람다 함수의 구체적인 본체
    });                                                         //
 
    cout << endl;

    return 0;
}


