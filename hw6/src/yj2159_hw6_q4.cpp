#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

void printDivisor(int num);

int main() {
    
    using std::cin;
    
    int userInput(0);

    cout << "Please enter a positive integer >= 2: ";
    cin >> userInput;

    printDivisor(userInput);

    return 0;
}

void printDivisor(int num) {
    const int squareRoot(sqrt(num));

    for (int numCheck(1); numCheck<squareRoot; ++numCheck) {
        if (num%numCheck == 0) {
            cout << numCheck << " ";
        }
    }

    for (int numCheck(squareRoot); numCheck>=1; --numCheck) {
        if (num%numCheck == 0) {
            cout << num/numCheck << " ";
        }
    }

    cout << endl;
}