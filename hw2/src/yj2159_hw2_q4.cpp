#include <iostream>

int main(){
    using std::cout;
    using std::endl;
    using std::cin;

    int x,y;

    cout << "Please enter two positive integers, separated by a space: ";
    cin >> x;
    cin >> y;

    cout << x << " + " << y << " = " << x+y <<endl;
    cout << x << " - " << y << " = " << x-y <<endl;
    cout << x << " * " << y << " = " << x*y <<endl;
    cout << x << " / " << y << " = " << (double)x/y <<endl;
    cout << x << " div " << y << " = " << x/y <<endl;
    cout << x << " mod " << y << " = " << x%y <<endl;

    return 0;
}