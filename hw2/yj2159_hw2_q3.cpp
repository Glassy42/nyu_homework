#include <iostream>

int main(){
    using std::cout;
    using std::endl;
    using std::cin;

    int johnsWorkDays(0);
    int johnsWorkHours(0);
    int johnsWorkMinutes(0);
    int billsWorkDays(0);
    int billsWorkHours(0);
    int billsWorkMinutes(0);

    cout << "Please enter the number of days John has worked: ";
    cin >> johnsWorkDays;
    cout << "Please enter the number of hours John has worked: ";
    cin >> johnsWorkHours;
    cout << "Please enter the number of minutes John has worked: ";
    cin >> johnsWorkMinutes;
    cout << "Please enter the number of days Bill has worked: ";
    cin >>  billsWorkDays;
    cout << "Please enter the number of hours Bill has worked: ";
    cin >> billsWorkHours;
    cout << "Please enter the number of minutes Bill has worked: ";
    cin >> billsWorkMinutes;

    int totalWorkDays(johnsWorkDays + billsWorkDays);
    int totalWorkHours(johnsWorkHours + billsWorkHours);
    int totalWorkMinutes(johnsWorkMinutes + billsWorkMinutes);

    totalWorkHours += totalWorkMinutes/60;
    totalWorkMinutes = totalWorkMinutes%60;
    totalWorkDays += totalWorkHours/24;
    totalWorkHours = totalWorkHours%24;

    cout << "The total time both of them worked together is: ";
    cout << totalWorkDays << " days, " << totalWorkHours << " hours and ";
    cout << totalWorkMinutes << " minutes" << endl;

    return 0;
}