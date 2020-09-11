#include <iostream>
#include <string>
#include <cctype>

int countWords(std::string str, const int length);

int main(){
    using std::cout;
    using std::endl;
    using std::cin;
    using std::string;

    string str;

    cout << "Please enter a line of text: ";
    getline(cin, str);

    const int length(str.length());
    
    for (int i(0); i < length; ++i) {
        str[i] = tolower(str[i]);
    }

    int wordCount = countWords(str, length);

    cout << wordCount << "\t words" << endl;

    const int letters(26);

    int charCounters[letters];
    for (int i(0); i < letters; ++i) {
        charCounters[i] = 0;
    }

    const int letterA(97);
    const int letterZ(122);

    for (int i(0); i < length; ++i) {
        if ((str[i] <= letterZ) && (str[i] >= letterA)){
            charCounters[str[i] - letterA]++;
        }
    }

    for(int i(0); i < letters; ++i) {
        if (charCounters[i] > 0) {
            cout << charCounters[i] << "\t" << (char)(i+letterA) << endl;
        }
    }

    return 0;
}

int countWords(std::string str, const int length) {
    int wordCount(0);
    int currWordLen(0);
    for (int i(0); i <= length; ++i) {
        if ((str[i] == ' ') || (i == length) || (str[i] == ',') || (str[i] == '.')){
            if(currWordLen > 0) {
                wordCount++;
                currWordLen = 0;
            }
        } else {
            currWordLen++;
        }
    }
    return wordCount;
}