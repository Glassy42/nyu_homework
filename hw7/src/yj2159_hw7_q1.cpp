#include <iostream>

int printMonthCalender(int numOfDays, int startingDay);
// void printYearCalender(int year, int startingDay);

int main() {
    using std::cout;
    using std::endl;

    printMonthCalender(30, 7);
    printMonthCalender(30, 6);
    printMonthCalender(30, 5);
    printMonthCalender(30, 4);
    printMonthCalender(30, 3);
    printMonthCalender(30, 2);
    printMonthCalender(30, 1);

    return 0;
}

int printMonthCalender(int numOfDays, int startingDay) {
    using std::cout;
    using std::endl;

    const int Mon(1);
    const int Tue(2);
    const int Wed(3);
    const int Thr(4);
    const int Fri(5);
    const int Sat(6);
    const int Sun(7);

    int lastDay(0);

    cout << "Mon" << "\t" << "Tue" << "\t" << "Wed" << "\t" << "Thr" << "\t";
    cout << "Fri" << "\t" << "Sat" << "\t" << "Sun" << endl;

    switch (startingDay) {

        case 1:
            for (int num(1); num<=numOfDays; num++) {
                cout << num << "\t";
                if (num%7==0) {
                    cout << endl;
                }
            }
            if (numOfDays%7==0) {
                lastDay = 7;
            } else {
                lastDay = numOfDays%7;
            }
            cout << endl;
        break;

        case 2:
            cout << "\t";
            for (int num(1); num<=numOfDays; num++) {
                cout << num << "\t";
                if (num%7==6){
                    cout << endl;
                }
            }
            lastDay = (numOfDays%7) +1;
            cout << endl;
        break;

        case 3:
            cout << "\t" << "\t";
            for (int num(1); num<=numOfDays; num++) {
                cout << num << "\t";
                if (num%7==5){
                    cout << endl;
                }
            }
            if (numOfDays%7==6) {
                lastDay = 1;
            } else{
                lastDay = (numOfDays%7)+2;
            }
            cout << endl;
        break;

        case 4:
            cout << "\t"<< "\t"<< "\t";
            for (int num(1); num<=numOfDays; num++) {
                cout << num << "\t";
                if (num%7==4){
                    cout << endl;
                }
            } if (numOfDays%7 == 6) {
                lastDay = 2;
            } else if (numOfDays%7 == 5) {
                lastDay = 1;
            } else {
                lastDay = (numOfDays%7) + 3;
            }
            cout << endl;
        break;

        case 5:
            cout << "\t"<< "\t"<< "\t"<< "\t";
            for (int num(1); num<=numOfDays; num++) {
                cout << num << "\t";
                if (num%7==3){
                    cout << endl;
                }
            }
            if (numOfDays%7 == 4) {
                lastDay = 1;
            } else if(numOfDays%7 == 5) {
                lastDay = 2;
            } else if(numOfDays%7 == 6) {
                lastDay = 3;
            } else {
                lastDay = (numOfDays%7) +4;
            }
            cout << endl;
        break;

        case 6:
            cout << "\t"<< "\t"<< "\t"<< "\t"<< "\t";
            for (int num(1); num<=numOfDays; num++) {
                cout << num << "\t";
                if (num%7==2){
                    cout << endl;
                }
            } if(numOfDays%7 == 0) {
                lastDay = 5;
            } else if(numOfDays%7 == 1) {
                lastDay = 6;
            } else if(numOfDays%7 == 2) {
                lastDay = 7;
            } else { 
                lastDay = (numOfDays%7) -2;
            }
            cout << endl;
        break;

        case 7:
            cout << "\t"<< "\t"<< "\t"<< "\t"<< "\t"<< "\t";
            for (int num(1); num<=numOfDays; num++) {
                cout << num << "\t";
                if (num%7==1){
                    cout << endl;
                }
            }
            if (numOfDays%7 == 1) {
                lastDay = 7;
            } else if(numOfDays%7 == 0) {
                lastDay = 6;
            } else {
                lastDay = (numOfDays%7) -1;
            }
            cout << endl;
        break;
    }

    return lastDay;
}

// void printYearCalender(int year, int startingDay) {

// }