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
  
    if (startingDay == 8) { // when return value is 7, in year calender funcion, should +1. so 8 should be 1.
        startingDay = 1;
    }

    int lastDay(0);

    cout << "Mon" << "\t" << "Tue" << "\t" << "Wed" << "\t" << "Thr" << "\t";
    cout << "Fri" << "\t" << "Sat" << "\t" << "Sun" << endl;

    for (int tabs(1); tabs < startingDay; tabs++) { // how many tabs you need for the firstline in calendar
        cout << "\t";
    }

    for (int num(1); num<=numOfDays; num++) {
        cout << num << "\t";
        if (num%7==((8-startingDay)%7) || num == numOfDays) { // entering to newline // num == numofdays -> this is for feb entering issue
            cout << endl;           
        }
    }
    cout << endl;

    lastDay = (startingDay+numOfDays)%7; 

    if (lastDay == 0) { // when startingday is 4 and numofdyas is 31 %7 is 0 which should be 7.
        lastDay = 7;
    } else if (lastDay == 1) { 
        lastDay = 8;
    }

    return lastDay-1;
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