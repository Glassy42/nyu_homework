#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using std::string;
void matchPin();

int main() {

    matchPin();

    return 0;
}


void matchPin() {
    const int actualPin[] = {1,2,3,4,5};
    int arrNum[10];

    srand(time(0));
    for (int i(0); i < 10; ++i) {
         arrNum[i] = rand() % 3 + 1;
    }

    std::cout << "Please enter your PIN according to the following mapping: " << std::endl;
    std::cout << "PIN:\t";
    for (int i(0); i < 10; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << "NUM:\t";
    for (int i(0); i < 10; ++i) {
        std::cout << arrNum[i] << " ";
    }
    std::cout << std::endl;

    std::string userInput;
    std::cin >> userInput;

    for (int i(0); i < userInput.size(); ++i) {
        const char num(userInput[i]);
        const int numAsInt(num-'0');

        const int currentPinDigit(actualPin[i]);
        if (numAsInt != arrNum[currentPinDigit]) {
            std::cout << "Your PIN is not correct!" << std::endl;
            return;
        }
    }

    std::cout << "Your PIN is correct!" << std::endl;
}
