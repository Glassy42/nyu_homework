#include <iostream>

int main(){
    using std::cout;
    using std::endl;
    using std::cin;

    int num1(0), num2(0), num3(0), num4(0);

    cout << "Please enter number of coins:" << endl;
    cout << "of quarters: ";
    cin >> num1;
    cout << "of dimes: ";
    cin >> num2;
    cout << "of nickels: ";
    cin >> num3;
    cout << "of pennies: ";
    cin >> num4;

    const int quarters(num1 * 25);
    const int dimes(num2 * 10);
    const int nickels(num3 * 5);
    const int pennies(num4 * 1);

    const int totalMoney(quarters + dimes + nickels + pennies);

    const int dollar(totalMoney / 100);
    const int cents(totalMoney % 100);
    cout << "The total is " << dollar << " dollars and " << cents << " cents" << endl;

    return 0;
}