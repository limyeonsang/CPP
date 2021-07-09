// access limiter

#include <iostream>
using namespace std;

class Acess {
public:
    int id;

private:
    int password;

public:
    Acess(int i) {
        id = i;
    }

    void setPassword(int p) { // private can set condition
        if (p < 0) 
            cout << "password, must more than 0" << endl;
        else
            password = p;

    }

    void printState() {
        cout << id << endl << password << endl;
    }
};

int main() {
    Acess acs(1);
    // acs.password = 111; can't run
    
    acs.setPassword(222);
    acs.printState();

    
    Acess acs1(2);
    acs1.setPassword(-222);

    return 0;
}