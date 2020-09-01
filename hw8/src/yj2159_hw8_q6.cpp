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
    
    string word;
    string split;

    for (int i(0); i <= length; ++i){
        if ((str[i] == ' ') || (i == length)) {
            split = word;
            int splitLength(split.length());
            int count(0);
            for (int j(0); j < splitLength; ++j) {
                if (isdigit(split[j])){
                    count++;
                }
            }
            if (count == splitLength) {
                for (int k(0); k < splitLength; ++k) {
                    split[k] = 'x';
                }
            }
            count = 0;
            std::cout << split << " ";
            word = "";
        } else {
            word = word + str[i];
        }
    }

    std::cout << std::endl;
}