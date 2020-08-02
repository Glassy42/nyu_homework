#include <iostream>

int main(){
    using std::cout;
    using std::endl;
    using std::cin;

    int dollar(0);
    int cents(0);

    cout << "Please enter your amount in the format of dollars and cents separated by a space: ";
    cin >> dollar;
    cin >> cents;

    int convertToCents(dollar*100 + cents);

    int quarters(convertToCents/25);
    int remainder(convertToCents%25);

    int dimes(remainder/10);
    remainder = remainder%10;

    int nickels(remainder/5);
    remainder = remainder%5;

    int pennies(remainder);

    cout << dollar << " dollars and " << cents << " cents are: " << endl;
    cout << quarters << " quarters, " << dimes << " dimes, ";
    cout << nickels << " nickels and " << pennies << " pennies" << endl;


    return 0;
}