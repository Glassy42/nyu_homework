#include <iostream>

int main(){
    using std::cout;
    using std::endl;
    using std::cin;

    int userInput(0);

    cout << "Please enter a positive integer: ";
    cin >> userInput;

    int rowNum(1);
    
    for(int lineCount(1); lineCount<=userInput; lineCount++){

        int multiple(rowNum);

        while (multiple<=rowNum*userInput) {
            cout << multiple << "\t";
            multiple += rowNum;
        }

        cout << endl;
        rowNum = rowNum+1;
    }

    return 0;
}