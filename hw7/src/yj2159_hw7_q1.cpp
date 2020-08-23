#include <iostream>

int printMonthCalender(int numOfDays, int startingDay);
void printYearCalender(int year, int startingDay);

int main() {
    using std::cout;
    using std::endl;

    printYearCalender(2016, 5);

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

void printYearCalender(int year, int startingDay) {
    using std::cout;
    using std::endl;

        cout << "January " << year << endl;
        int janLastDay = printMonthCalender(31,startingDay);

    int febLastDay;
    if (((year%4 == 0)&&(year%100 != 0))||(year%400 == 0)) {
        cout << "February " << year << endl;
        febLastDay = printMonthCalender(28, janLastDay+1);
    } else {
        cout << "February " << year << endl;
        febLastDay = printMonthCalender(29, janLastDay+1);
    }

        cout << "March " << year << endl;
        int marLastDay = printMonthCalender(31, febLastDay+1);

        cout << "April " << year << endl;
        int aprLastDay = printMonthCalender(30, marLastDay+1);

        cout << "May " << year << endl;
        int mayLastDay = printMonthCalender(31, aprLastDay+1);

        cout << "June " << year << endl;
        int junLastDay = printMonthCalender(30, marLastDay+1);

        cout << "July " << year << endl;
        int julLastDay = printMonthCalender(31, junLastDay+1);

        cout << "August " << year << endl;
        int augLastDay = printMonthCalender(31, julLastDay+1);

        cout << "September " << year << endl;
        int sepLastDay = printMonthCalender(30, augLastDay+1);

        cout << "Octorber " << year << endl;
        int octLastDay = printMonthCalender(31, sepLastDay+1);

        cout << "November " << year << endl;
        int novLastDay = printMonthCalender(30, octLastDay+1);

        cout << "December " << year << endl;
        int decLastDay = printMonthCalender(31, novLastDay+1);

}