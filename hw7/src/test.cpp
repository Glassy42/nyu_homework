#include <iostream>


int main() {
    using std::cout;
    using std::endl;
    using std::cin;


    int userInput(0);

    cout << "enter it: " << endl;
    cin >> userInput;

    cout << "Mon" << "\t" << "Tue" << "\t" << "Wed" << "\t" << "Thr" << "\t";
    cout << "Fri" << "\t" << "Sat" << "\t" << "Sun" << endl;

    for (int num(1); num<=userInput; num++){
        cout << num << "\t";
        if (num%7==0) {
            cout << endl;
        }
    }
    cout << endl;
    return 0;
}