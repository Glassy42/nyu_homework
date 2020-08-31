#include <iostream>
#include <string>

using std::string;
void findDigit(string str);

int main() {
    using std::cout;
    using std::endl;
    using std::cin;
    

    string userInput;

    cout << "Please enter a line of text: ";
    getline(cin, userInput);

    findDigit(userInput);

    return 0;
}

void findDigit(string str) {

    int length(str.length());

    for (int i(0); i < length; i++) {
        
        if (i > 0){
            if ((isdigit(str[i])) && ((str[i-1] == ' ')||(str[i-1] == 'x'))) {
                str[i] = 'x';
            }
        } else {
            if ((isdigit(str[0])) && ((str[1] == ' ')||isdigit(str[1]))) {
                str[0] = 'x';
            }
        }
        
    }

    std::cout << str << std::endl;
}