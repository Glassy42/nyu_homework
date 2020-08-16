#include <iostream>

int main(){
    using std::cout;
    using std::endl;
    using std::cin;

    int userInput(0);

    cout << "Please enter a positive integer: ";
    cin >> userInput;
    
    for(int rowNum(1); rowNum <= userInput; ++rowNum) {
        for(int colNum(1); colNum<=userInput; colNum++){
            cout << rowNum * colNum << "\t";
        }
        cout << endl;
    }

    return 0;
}