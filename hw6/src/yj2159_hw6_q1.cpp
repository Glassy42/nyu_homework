#include <iostream>

int fib(int n);

int main(){
    using std::cout;
    using std::endl;
    using std::cin;

    int userInput(0);

    cout << "Please enter a positive integer: ";
    cin >> userInput;

    cout << fib(userInput) << endl;

    return 0;
}

int fib(int n) {
    if (n == 1){
        return 1;
    } else if (n == 2) {
        return 1;
    } else {
        int fn_1(1);
        int fn_2(1);
        int fn(0);
        for (int i(3); i <= n; i++) {
            fn = fn_1 + fn_2;
            fn_2 = fn_1;
            fn_1 = fn;
        }

        return fn;
    }
    
}