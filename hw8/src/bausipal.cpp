#include <iostream>
#include <string>

using std::string;

bool isPalindrome(string str);
bool bausiIsPalindrome(string str);

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

    cout << (bausiIsPalindrome(str) ? "true" : "false") << endl;

    return 0;
} 

bool bausiIsPalindrome(string str) {
    int limit = str.length() / 2;
    for (int i(0); i < limit; ++i) {
        if (str[i] != str[str.length()-1-i]) {
            return false;
        }
    }

    return true;
}