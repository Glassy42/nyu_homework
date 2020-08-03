#include <iostream>
#include <cmath>

int main(){
    using std::cout;
    using std::endl;
    using std::cin;
    
    int length(0);
    int num(0);
    int sequence(1);

    cout << "a) Frist read the length of the sequence." << endl;
    cout << "Please enter the length of the sequence: ";
    cin >> length;
    cout << "Please enter your sequence: " << endl;

    for (int i(1); i<=length; i++) {
        cin >> num;
        sequence *= num;
    } 
    cout << "The geometric mean is: " << pow(sequence,1.0/(double)length) << endl;
    cout << endl;

    int userInput(0);
    int total(1);
    int numCount(0);

    cout << "b) Keep reading the numbers until -1 is entered." << endl;
    cout << "Please enter a non-empty sequence of positive integers, each one in a separate line.";
    cout << "End your sequence by typind -1: " << endl;

    while (userInput!=-1) {
        cin >> userInput;
        if (userInput!=-1){
            numCount++;
            total *= userInput;
        }
    }
   
    cout << "The geometric mean is: " << pow(total,1.0/(double)numCount) << endl;

    return 0;
}