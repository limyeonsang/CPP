// constructor overloading

#include <iostream>
using namespace std;

class StudentInfo {
public:
    string name;
    int grade;
    int cls;

    StudentInfo(string n, int g, int c) {
        name = n;
        grade = g;
        cls = c;
    }

    StudentInfo(string n) {
        name = n;
        grade = 2;
        cls = 4;
    }

    void getInfo() {
        cout << name << "  " << grade << " " << cls << endl;
    }

    void print8(int x=5, int y=3) {
        cout << x+y << endl;
    }
};

int main() {
    StudentInfo sinfo1("Yeon", 2, 3);
    sinfo1.getInfo();

    StudentInfo sinfo2("Ji", 2, 2);
    sinfo2.getInfo();

    sinfo1.print8(1,2);
    sinfo1.print8();

    return 0;
}