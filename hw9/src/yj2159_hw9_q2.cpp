#include <iostream>
#include <string>
#include <cctype>

using std::string;
int* anagrams(string str);

int main(){
    using std::cout;
    using std::endl;
    using std::cin;

    string str1;
    string str2;

    cout << "Please enter two strings: " << endl;
    getline(cin, str1);
    getline(cin, str2);

    int* charCount1 = anagrams(str1);
    int* charCount2 = anagrams(str2);

    const int letters(26);
    bool notAnagrams(false);
    for (int i(0); i < letters; ++i) {
        if (charCount1[i] != charCount2[i]) {
            notAnagrams = true;
            break;
        }
    }
    if (notAnagrams) {
        cout << "Two strings are not anagrams" << endl;
    } else { 
        cout << "Two strings are anagrams" << endl;
    }
    

    delete[] charCount1;
    delete[] charCount2;
    
    return 0;
}

int* anagrams(string str) {
    const int length(str.length());
    
    for (int i(0); i < length; ++i) {
        str[i] = tolower(str[i]);
    }

    const int letters(26);
    int* charCounters = new int[letters];

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

    return charCounters;
}