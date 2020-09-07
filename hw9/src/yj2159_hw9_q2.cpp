#include <iostream>
#include <string>
#include <cctype>

using std::string;
void anagrams(string& str);

int main(){
    using std::cout;
    using std::endl;
    using std::cin;

    string str1;
    string str2;

    cout << "Please enter two strings: " << endl;
    getline(cin, str1);
    getline(cin, str2);

    anagrams(str1);
    anagrams(str2);

    const int letters(26);
    int num(0);
    for (int i(0); i < letters; ++i) {
        if (str1[i] == str2[i]) {
            num++;
        }
    }

    if (num==26) {
        cout << "Two strings are anagrams" << endl;
    } else { 
        cout << "Two strings are not anagrams" << endl;
    }

    return 0;
}

void anagrams(string& str) {
    const int length(str.length());
    
    for (int i(0); i < length; ++i) {
        str[i] = tolower(str[i]);
    }

    char arr[length];
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

    string sentence;

    for (int i(0); i < letters; ++i) {
        sentence = sentence + (char)(charCounters[i]);
    }

    str = sentence;
}