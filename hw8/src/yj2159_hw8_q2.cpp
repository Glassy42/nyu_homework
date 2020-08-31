#include <iostream>
#include <string>
#include <cctype>

using std::string;

bool isPalindrome(string str);

int main() {
    using std::cout;
    using std::endl;
    using std::cin;

    string str;

    cout << "Please enter a word: ";
    cin >> str;

    bool result;
    result = isPalindrome(str);

    if (result) {
        cout << str << " is a palindrome" << endl;
    } else { 
        cout << str << " is not a palindrome" << endl;
    }

    return 0;
} 

bool isPalindrome(string str) {

    int strNum = str.length();
    int num(strNum);

    for (int i(0); i<strNum; i++) {
        str[i] = tolower(str[i]);
    }

    if (num%2 == 0) { //when the length of the string is even
        for (int i(0); i<strNum/2; i++) { 
            if (str[i] == str[num-1]) {
                num--;
            }
        }
    } else { //when the length of the string is odd
        for (int i(0); i<=strNum/2; i++) {
            if (str[i] == str[num-1]) {
                num--;
            }
        }
    }

    if (num == strNum/2) {
        return true;
    } else {
        return false;
    }

}
