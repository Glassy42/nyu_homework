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

    firstName[0] = toupper(firstName[0]);
    middleInitial[0] = toupper(middleInitial[0]);
    lastName[0] = toupper(lastName[0]);

    cout << lastName << ", " << firstName << " " << middleInitial.substr(0,1) << "." << endl;
    return 0;
}