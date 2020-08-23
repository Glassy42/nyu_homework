#include <iostream>

int printMonthCalender(int numOfDays, int startingDay);
void printYearCalender(int year, int startingDay);

int main() {
    using std::cout;
    using std::endl;
    using std::cin;

    printYearCalender(2016, 1);

    return 0;
}

int printMonthCalender(int numOfDays, int startingDay){
    using std::endl;
    using std::cout;

    int lastDay(0);

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

    return lastDay;
}

void printYearCalender(int year, int startingDay){
    
    std::cout << year << std::endl;
    int store = printMonthCalender(31,startingDay);
    std::cout << std::endl;
    std::cout << store << std::endl;

}