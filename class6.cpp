// setter, getter

#include <iostream>
using namespace std;

class Current {
// private: private can skip
    int year, month, day;

public:
    Current(int y, int m, int d) { 
        year = y;
        month = m;
        day = d;
    }

    void printState() {
        cout << year << " " << month << " " << day << endl;
    }

    void setYear(int y) {
        if (y<0) return;
        year = y;
    }
    void setMonth(int m) {
        if (m<0) return;
        month = m;
    }
    void setDay(int d) {
        if (d<0) return;
        day = d;
    }   

    int getYear() {
        return year;
    }
    int getMonth() {
        return month;
    }
    int getDay() {
        return day;
    }
};

int main() {
    Current cur(2021, 7, 9);
    // cur.Year = 2020; can't run
    cur.printState();

    cur.setYear(2020);
    cout << cur.getYear() << endl;

    cur.printState();

    return 0;
}