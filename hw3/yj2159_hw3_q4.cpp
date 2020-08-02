#include <iostream>

int main(){
    using std::cout;
    using std::endl;
    using std::cin;

    const int FLOOR_ROUND(1);
    const int CEILING_ROUND(2);
    const int ROUND(3);

    double userInput(0);
    int roundingMethod(0);

    cout << "Please enter a Real number: ";
    cin >> userInput;
    cout << "Choose your rounding method:" << endl;
    cout << "1.Floor round" << endl;
    cout << "2.Ceiling round" << endl;
    cout << "3.Round to the nearest whole number" << endl;
    cin >> roundingMethod;

    switch(roundingMethod){
        case FLOOR_ROUND:
            if (userInput<0) {
                cout << int(userInput)-1 << endl;
            } else {
                cout << int(userInput) << endl;
            }
            break;

        case CEILING_ROUND:
            if (userInput<0) {
                cout << int(userInput) << endl;
            } else {
                cout << int(userInput)+1 << endl;
            }
            break;

        case ROUND:
            if (userInput<0){
                if ((userInput-int(userInput))>(-0.5)) {
                    cout << int(userInput) << endl;
                } else {
                    cout << int(userInput)-1 << endl;
                }
            } else {
                if ((userInput-int(userInput))>=0.5) {
                    cout << int(userInput)+1 << endl;
                } else {
                    cout << int(userInput) << endl;
                }
            }
            
            break;
    }
    return 0;
}