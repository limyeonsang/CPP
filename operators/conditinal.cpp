// conditional operator(arithmetric if)
#include <iostream>

int getPrice(bool onSale) {
    if (onSale) return 10;
    else return 100;
}

int main() {
    using namespace std;

    bool onSale = true;

    // if logic is easy, better then for loop to init const
    const int conditionalPrice = (onSale==true) ? 10:100;
    cout << conditionalPrice << endl;

    const int forPrice = getPrice(true);
    cout << forPrice << endl;


    int x = 5;
    cout << ((x%2==0)? "even":"odd") <<endl;

    return 0;
}