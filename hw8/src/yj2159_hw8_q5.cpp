#include <iostream>
#include <string>
#include <cctype>

int main() {
    using std::cout;
    using std::endl;
    using std::cin;
    using std::string;

    string firstName;
    string middleInitial;
    string lastName;
    
    cout << "Please enter your name: ";
    cin >> firstName;
    cin >> middleInitial;
    cin >> lastName;

    if (tolower(firstName[0])) {
        firstName[0] = toupper(firstName[0]);
    }
    if (tolower(middleInitial[0])) {
        middleInitial[0] = toupper(middleInitial[0]);
    }
    if (tolower(lastName[0])) {
        lastName[0] = toupper(lastName[0]);
    }

    cout << lastName << ", " << firstName << " " << middleInitial.substr(0,1) << "." << endl;
    return 0;
}