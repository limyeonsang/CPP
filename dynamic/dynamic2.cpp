// dynamic object creation

#include <iostream>
using namespace std;

class Student {
    string name;   
    int grade;
    int cla;
public:
    Student() {}
    ~Student() {}

    void setName(string n) {name=n;}
    void setGrade(int g) {grade=g;}
    void setClass(int c) {cla=c;}

    string getName() {return name;}
    int getGrade() {return grade;}
    int getClass() {return cla;}
};

int main() {
    Student* stu = new Student;  
    stu->setName("yeon");
    stu->setGrade(2);
    stu->setClass(3);

    cout << stu->getName() << endl;
    cout << stu->getGrade() << endl;
    cout << stu->getClass() << endl;

    delete stu;

    return 0;
}