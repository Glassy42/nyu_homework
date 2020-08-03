#include <iostream>

int main(){
    using std::cout;
    using std::endl;
    using std::cin;

    int userInput(0);

    cout << "Please enter a postivie integer: ";
    cin >> userInput;

    for (int i(1); i<=userInput; i++) {
        int even(0);
        int odd(0);
        int currNum(i);
        int remainder (0);

        while (currNum > 0 ) {
            remainder = currNum%10;
            if (remainder%2==0) {
                even += 1;
            }
            if (remainder%2!=0) {
                odd += 1;
            }
            currNum = currNum/10;
        }

        if (even>odd) {
            cout << i << endl;
        }
    }

    return 0;

}