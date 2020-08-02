#include <iostream>
#include <string>

int main(){
    using std::cout;
    using std::endl;
    using std::cin;
    using std::string;

    int hour(0);
    int min(0);
    int callMinutes(0);
    char colon;
    string dayOfTheWeek;
    
    cout << "Please enter the day of the week you call(Mo,Tu,We,Th,Fr,Sa,Su): ";
    cin >> dayOfTheWeek;
    cout << "Please enter the time the call started(24-hour notation): ";
    cin >> hour >> colon >> min;
    cout << "Please enter the length of the call in minutes: ";
    cin >> callMinutes;

    double bill(0);

    if ((dayOfTheWeek=="Sa")||(dayOfTheWeek=="Su")) {
        bill = callMinutes * 0.15;
        cout << "The cost of the call is: $" << bill << endl;
    } else {
        if ((hour<8)||(hour>18)||((hour==18)&&(min>=1))) {
            bill = callMinutes * 0.25;
            cout << "The cost of the call is: $" << bill << endl;
        }else {
            bill = callMinutes * 0.40;
            cout << "The cost of the call is: $" << bill << endl;
        }
    }
    
    return 0;
}