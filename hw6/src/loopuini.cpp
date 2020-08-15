#include <iostream>

int main() {
    using namespace std;

    const int fib1(1);
    const int fib2(1);

    int fib3(fib1+fib2);
    cout << fib3 << endl;
    int fib4(fib3+fib2);
    cout << fib4 << endl;
    int fib5(fib4+fib3);
    cout  << fib5 << endl;
}