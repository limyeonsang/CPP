// constructor

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

    void getInfo() {
        cout << name << "  " << grade << " " << cls << endl;
    }
};

int main() {
    StudentInfo sinfo1("Yeon", 2, 3);
    sinfo1.getInfo();

    StudentInfo sinfo2("Ji", 2, 2);
    sinfo2.getInfo();

    return 0;
}